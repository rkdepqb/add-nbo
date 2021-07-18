#include<netinet/in.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    uint32_t a1,a2,sum ;

    fp=fopen(argv[1],"rb");
    fread(&a1, sizeof(int),4,fp);
    a1 = ntohl(a1);
    printf("thousand = %d (0x%x)" ,a1,a1);
    fclose(fp);

    printf("\n");

    fp=fopen(argv[2],"rb");
    fread(&a2, sizeof(int),4,fp);
    a2 = ntohl(a2);
    printf("five hund = %d (0x%x)", a2,a2);
    fclose(fp);

    printf("\n");
    sum = a1 + a2;
    printf("result : %d (0x%0x)", sum,sum);
}
