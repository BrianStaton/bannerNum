#include <stdio.h>
#include <stdlib.h>
#include "bannerNum.h"

int main(int argc, char *argv[])
{
    uint32_t theNum = 123456789;
    uint32_t numDigits = 10;

    if (argc > 1)
    {
        theNum = (uint32_t)(strtoul(argv[1], NULL, 10));
        if (argc > 2)
        {
            numDigits = (uint32_t)(strtoul(argv[2], NULL, 10));
        }
        else
        {
            numDigits = 0;
        }
    }
    printBannerNum(theNum, numDigits);

    return 0;
}
