#include <stdio.h>

int main(void){
    char ch;
    float price, weight, v_cost;
    float discount = 0, shipfee = 0, t_cost;
    float artichoke_w = 0, beet_w = 0, carrot_w = 0, total_weight = 0;
    float subtotal = 0, total_cost = 0;

    printf("Enter a:artichoke b:beet c:carrot q:quit: ");
    while(scanf(" %c",&ch)==1 && ch != 'q'){
        switch(ch){
            case 'a':
                price = 2.05;
                printf("Enter the weight: ");
                scanf("%f",&weight);
                artichoke_w += weight;
                v_cost = price * weight;
                subtotal += v_cost;
                break;
            case 'b':
                price = 1.15;
                printf("Enter the weight: ");
                scanf("%f",&weight);
                beet_w += weight;
                v_cost = price * weight;
                subtotal += v_cost;
                break;
            case 'c':
                price = 1.09;
                printf("Enter the weight: ");
                scanf("%f",&weight);
                carrot_w += weight;
                v_cost = price * weight;
                subtotal += v_cost;
                break;
            default:
                printf("Invalid input, please enter a/b/c/q\n");
                continue;
        }
        printf("\nEnter a:artichoke b:beet c:carrot q:quit: ");
    }

    total_weight = artichoke_w + beet_w + carrot_w;

    if(subtotal >= 100){
        discount = subtotal * 0.05;
    }

    if(total_weight > 0){
        if(total_weight <= 5){
            shipfee = 6.5;
        }else if(total_weight <= 20){
            shipfee = 14;
        }else{
            shipfee = 14 + (total_weight - 20) * 0.5;
        }
    }

    total_cost = subtotal - discount + shipfee;

    printf("\n--- Order Summary ---\n");
    if(artichoke_w > 0){
        printf("Artichoke: %.2f lbs at $2.05/lb → $%.2f\n", artichoke_w, artichoke_w * 2.05);
    }
    if(beet_w > 0){
        printf("Beet: %.2f lbs at $1.15/lb → $%.2f\n", beet_w, beet_w * 1.15);
    }
    if(carrot_w > 0){
        printf("Carrot: %.2f lbs at $1.09/lb → $%.2f\n", carrot_w, carrot_w * 1.09);
    }
    if(total_weight == 0){
        printf("No goods purchased.\n");
    }else{
        printf("Subtotal before discount: $%.2f\n", subtotal);
        printf("Discount (5%% if ≥$100): $%.2f\n", discount);
        printf("Shipping & handling: $%.2f\n", shipfee);
        printf("Total order cost: $%.2f\n", total_cost);
    }

    return 0;
}