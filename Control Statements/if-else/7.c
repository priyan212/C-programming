//Write a program to check if a person is eligible to vote in India  or not.
int main(void) {
    int age;
    printf("enter the age:");
    scanf("%d",&age);
    if (age>=18){
   printf("Can vote");
    }
   else
   printf("Cannot vote");			
	return 0;
}