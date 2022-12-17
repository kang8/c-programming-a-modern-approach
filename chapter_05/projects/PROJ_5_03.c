/**
 * Modify the ../broker.c program of Section 5.2 by making both of the following
 * changes:
 *
 * (a) Ask the user to enter the number of shares(股份) and the price per share,
 * instead of the value of the trade(交易额).
 *
 * (b) Add statements that compute the commission(佣金) charged by a rival(竞争对手)
 * broker ($33 plus 3¢ per share for fewer than 2000 shares; $33 plus 2¢ per
 * share for 2000 shares or more). Display the rival's commission as well as the
 * commission charged by the original broker.
 */

#include <stdio.h>

int main(void) {
  int shares;
  float trade_volume, share_price, origin_commission, rival_commission;

  printf("Enter the number of shares: ");
  scanf("%d", &shares);
  printf("Enter the price per share: ");
  scanf("%f", &share_price);

  trade_volume = shares * share_price;

  if (trade_volume < 2500.00f)
    origin_commission = 30.00f + .017f * trade_volume;
  else if (trade_volume < 6250.00f)
    origin_commission = 56.00f + .0066f * trade_volume;
  else if (trade_volume < 20000.00f)
    origin_commission = 76.00f + .0034f * trade_volume;
  else if (trade_volume < 50000.00f)
    origin_commission = 100.00f + .0022f * trade_volume;
  else if (trade_volume < 500000.00f)
    origin_commission = 155.00f + .0011f * trade_volume;
  else
    origin_commission = 255.00f + .0009f * trade_volume;

  if (origin_commission < 39.00f)
    origin_commission = 39.00f;

  if (shares < 2000) {
    rival_commission = 33.00f + .03 * shares;
  } else {
    rival_commission = 33.00f + .02 * shares;
  }

  printf("The original broker Commission: $%.2f\n", origin_commission);
  printf("The rival broker Commission: $%.2f\n", rival_commission);

  return 0;
}
