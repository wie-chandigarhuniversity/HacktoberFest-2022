#include<stdio.h>
#include<stdlib.h>


#define MAX_LIMIT 2000000000
#define FILE_NAME "prime_numbers.txt"

void find_prime_number(unsigned long long int max);
void write_file(int * prime, unsigned long long int max);

int main(){
    unsigned long long int a;
    printf("Enter max number: ");
    scanf("%llu",&a);
    
    find_prime_number(a);

    return 0;
}

// method to find prime number
void find_prime_number(unsigned long long int max){
    max ++;
    if(max > MAX_LIMIT ){
        printf("Sorry prime number till 2 Billion only... :)");
        return;
    }
    unsigned long long int i, count = 2, len = 0;

    // list of number of length max
    int * prime = (int *) malloc(sizeof(int) * max );


    // setting all value as true
    for(i = 2; i<max; i++){
        prime[i] = 1;    
    }
    for(i = count * count; i < max; i +=  count){
                prime[i] = 0;
            }
    count = 3;
    // for each number divisible by existing prime number set as composite number
    while(count < max){
        if(prime[count]){
            // number less than count * count are already checked by other prime number
            for(i = count * count; i < max; i += 2 * count){
                prime[i] = 0;
            }
        }
        count++;
    }


    printf("\n1 to write on text file\n2 to print on console \n3 (default) to print only total number of prime number\nYour choice: ");
    int inp = 'n';
    scanf(" %d",&inp);
    if(inp == 1){
        write_file(prime,max);
    }else if(inp == 2){
        for(i = 0; i <max; i ++){       
            if(prime[i]){
                printf("%llu\t",i);
                len++;
            }
        }
        printf("\nTotal prime numbers are %llu",len);

    }else{
        for(i = 0; i <max; i ++){       
            if(prime[i]){
                len++;
            }
        }
        printf("\nTotal prime numbers are %llu",len);

    }
    printf("\n");
}


void write_file(int * prime, unsigned long long int max){
    FILE *fptr = fopen(FILE_NAME, "w");
    if(fptr == NULL){
        printf("\nError: Invalid file path/Error on creating file...");
        return;
    }    
    unsigned long long int len = 0;
    for(unsigned long long int i = 0; i <max; i ++){
        
        if(prime[i]){
            fprintf(fptr,"%llu\n",i);
            len++;
        }
    }
    
    fprintf(fptr,"\n\n Total prime number: %llu",len);
    printf("\nTotal prime numbers are %llu",len);

}

