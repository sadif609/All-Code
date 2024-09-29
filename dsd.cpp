#include <iostream>
#include <queue>

using namespace std;

class Node {
public:
    int x, y;
    int level;
    Node(int a, int b, int z) : x(a), y(b), level(z) {}
    Node() : x(0), y(0), level(0) {} // Default constructor
};

class BFS {
public:
    int directions = 4;
    int x_move[4] = {1, -1, 0, 0};
    int y_move[4] = {0, 0, 1, -1};
    int N;
    bool found = false;
    int goal_level;
    Node source, goal;

    BFS() {
        Init();
    }

    void Init() {
        int graph[5][5] = {
            {0, 0, 1, 0, 1},
            {0, 1, 1, 1, 1},
            {0, 1, 0, 0, 1},
            {1, 1, 0, 1, 1},
            {1, 0, 0, 0, 1}
        };
        N = sizeof(graph) / sizeof(graph[0]);

        int source_x = 0; // source state
        int source_y = 2;
        int goal_x = 4; // goal state
        int goal_y = 4;
        source = Node(source_x, source_y, 0); // init source
        goal = Node(goal_x, goal_y, 999999); // init goal
        StBFS(graph);
        if (found) {
            cout << "Goal found" << endl;
            cout << "Number of moves required = " << goal_level << endl;
        } else {
            cout << "Goal can not be reached from starting block" << endl;
        }
    }

    void StBFS(int graph[5][5]) {
        queue<Node> q;
        q.push(source);

        while (!q.empty()) {
            Node u = q.front();
            q.pop();

            for (int j = 0; j < directions; j++) {
                int v_x = u.x + x_move[j];
                int v_y = u.y + y_move[j];

                if ((v_x < N && v_x >= 0) && (v_y < N && v_y >= 0) && graph[v_x][v_y] == 1) {
                    int v_level = u.level + 1;
                    if (v_x == goal.x && v_y == goal.y) { // goal check
                        found = true;
                        goal_level = v_level;
                        goal.level = v_level;
                        break;
                    }
                    graph[v_x][v_y] = 0;
                    Node child(v_x, v_y, v_level);
                    q.push(child);
                }
            }
            if (found) {
                break;
            }
        }
    }
};

int main() {
    BFS b;
    return 0;
}
