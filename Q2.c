int main() {
    int num1,num2,sum,difference,product,quotient;
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);
    sum =num1+num2;
    difference=num1-num2;
    product=num1*num2;
    quotient=num1/num2;
    printf("sum is:%d\n",sum);
    printf("difference is:%d\n",difference);
    printf("product is:%d\n",product);
    printf("quotient is:%d\n",quotient);
    return 0;
}