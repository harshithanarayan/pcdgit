#include <stdio.h>
int reverse(int x)
{
    int rev = 0;
    while(x>0) {
        rev = rev * 10 + x%10;
        x = x/10;
    }
    return rev;
}
int main(void) {
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("The reverse of the number %d is %d\n",n,reverse(n));
    if (n == reverse(n)) {
            printf("%d is a palindrome\n",n);
    }
    else {
            printf("%d is not a palindrome\n",n);
    }
    
	return 0;
}

