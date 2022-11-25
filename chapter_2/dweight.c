/* Computes the dimensional weight of a 12" x 10" x 8" box */

#include <stdio.h>

int main(void)
{
    int length, width, height;
    int volume, dimensional_weight;

    length = 12;
    width = 10;
    height = 8;
    volume = length * width * height;
    /* NOTE: volume = 166, dimensional_weight = 1; volume = 167, dimensional_weight = 2 */
    dimensional_weight = (volume + 165) / 166;

    printf("Dimensional: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", dimensional_weight);

    return 0;
}

/*
 * nouns:
 *
 * volume 体积
 * dimensional_weight 空间重量
 * length 长
 * width 宽
 * height 高
 */
