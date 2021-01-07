#include <stdio.h>
int main() {
        int Door_open=100;
        
        int password =123456;
       
        switch (Door_open) {
            case 100:
                printf("Enter your password:\n ");
                scanf("%d", & password);
                switch (password) {
                    case 123456:
                        printf("Welcome Home\n");//Door Open
                        break;
                    default:
                        printf("incorrect password");
                        break;
                }
                break;
            default:
                printf("Access_ Denided");
                break;
        }
}
