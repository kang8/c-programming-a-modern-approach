/* Computes the dimensional weight of a
  box from input provided by the user */

#include <stdio.h>

int main(void)
{
    int length, width, height;
    int volume, dimensional_weight;

    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);

    volume = length * width * height;
    /* NOTE: volume = 166, dimensional_weight = 1; volume = 167, dimensional_weight = 2 */
    dimensional_weight = (volume + 165) / 166;

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
