#include <bits/stdc++.h>
#include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #include<math.h>
    #define MAX 100000

	long long int remainder;

char * division(char dividend[],long divisor){
   
    static char quotient[MAX];
    long temp=0;
    int i=0,j=0;

    while(dividend[i]){
        
         temp = temp*10 + (dividend[i] -48);
         if(temp<divisor){
            
             quotient[j++] = 48;
            
         }
         else{
             quotient[j++] = (temp / divisor) + 48;;
             temp = temp % divisor;

         }
         i++;
    }

    quotient[j] = '\0';
    remainder = temp;
    return quotient;
}

    /******************************************************************/
    void reverse(char *from, char *to )
    {
        int len=strlen(from);
        int l;
        for(l=0;l<len;l++)
            to[l]=from[len-l-1];
        to[len]='\0';
    }
    /******************************************************************/
    void call_mult(char *first,char *sec,char *result){
        char F[MAX],S[MAX],temp[MAX];
        int f_len,s_len,f,s,r,t_len,hold,res;
        f_len=strlen(first);
        s_len=strlen(sec);
        reverse(first,F);
        reverse(sec,S);
        t_len=f_len+s_len;
        r=-1;

        for(f=0;f<=t_len;f++)
            temp[f]='0';
        temp[f]='\0';
        for(s=0;s<s_len;s++){
            hold=0;
            for(f=0;f<f_len;f++){
                res=(F[f]-'0')*(S[s]-'0') + hold+(temp[f+s]-'0');
                temp[f+s]=res%10+'0';
                hold=res/10;
                if(f+s>r) r=f+s;
            }
            while(hold!=0){
                res=hold+temp[f+s]-'0';
                hold=res/10;
                temp[f+s]=res%10+'0';
                if(r<f+s) r=f+s;
                f++;
            }
        }
        for(;r>0 && temp[r]=='0';r--);
        temp[r+1]='\0';
        reverse(temp,result);
    }
    /***************************************************************/
    int main(){
        char fir[MAX],sec[MAX],res[MAX];
	long long div;
	char s[100 * max];
	scanf ("%d", &tc);
	while (tc--) {
	scanf ("%lld", &div);
	scanf (" %s", s);

	while (i 
        while(scanf("%s%s",&fir,&sec)==2){
            call_mult(fir,sec,res);
    
	        int len=strlen(res);
            for(int i=0;i<len;i++) printf("%c",res[i]);
            printf("\n");
        	}
	}
        return 0;
    }
