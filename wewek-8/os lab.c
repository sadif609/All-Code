#include <stdio.h>

#define MAX_FRAMES 20
#define MAX_PAGES 50

int main() {
    int pageFaultCount = 0, pages[MAX_PAGES], memory[MAX_FRAMES], frameUsage[MAX_FRAMES];
    int numberOfPages, numberOfFrames, i, j, k, leastUsed;
printf("MD Ashiqul ISlam \t\t ID:212002056\n\n ");
    printf("Enter number of pages: ");
    scanf("%d", &numberOfPages);

    printf("Enter the pages: ");
    for (i = 0; i < numberOfPages; i++) {
        scanf("%d", &pages[i]);
    }

    printf("Enter number of frames: ");
    scanf("%d", &numberOfFrames);

    for (i = 0; i < numberOfFrames; i++) {
        memory[i] = -1;
        frameUsage[i] = 0;
    }

    printf("The Page Replacement Process is -->\n");
    for (i = 0; i < numberOfPages; i++) {
        int pageFound = 0;

        for (j = 0; j < numberOfFrames; j++) {
            if (memory[j] == pages[i]) {
                pageFound = 1;
                frameUsage[j] = i + 1;
                break;
            }
        }

        if (!pageFound) {
            int replaceIndex = 0;
            leastUsed = frameUsage[0];

            for (j = 1; j < numberOfFrames; j++) {
                if (frameUsage[j] < leastUsed) {
                    leastUsed = frameUsage[j];
                    replaceIndex = j;
                }
            }

            memory[replaceIndex] = pages[i];
            frameUsage[replaceIndex] = i + 1;
            pageFaultCount++;
        }

        printf("For %d :", pages[i]);
        for (k = 0; k < numberOfFrames; k++) {
            printf(" %d", memory[k]);
        }

        if (!pageFound) {
            printf("\tPage Fault ");
        } else {
            printf("\tNo page fault!");
        }

        printf("\n");
    }

    printf("Total no of page faults using LRU is: %d\n", pageFaultCount);
    return 0;
}
