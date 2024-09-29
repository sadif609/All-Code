#include <stdio.h>
#include <limits.h>

long long convertBinaryToDecimal(long long binaryNumber)
{
    long long num = binaryNumber;
    long long decimalValue = 0;
    long long base = 1;

    long long temp = num;
    while (temp)
    {
        long long last_digit = temp % 10;
        temp = temp / 10;

        decimalValue += last_digit * base;

        base = base * 2;
    }

    return decimalValue;
}

int main()
{
    char input[100];
    scanf("%s", input);
    long long k = 0;
    char part[20];
    int partIndex = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] != '.')
        {
            part[partIndex++] = input[i];
        }

        if (input[i] == '.' || input[i + 1] == '\0')
        {
            part[partIndex] = '\0';
            long long binaryNumber = 0;
            sscanf(part, "%lld", &binaryNumber);
            partIndex = 0;
            printf("%lld", convertBinaryToDecimal(binaryNumber));
            if (input[i + 1] != '\0')
                printf(".");
        }
    }
    printf("\n");
    return 0;
}
