#include <stdio.h>

	#define  jspd 0x01
	#define  asp  0x02
	#define  diaml 0x04
	#define  iot 0x08

int main (){
        unsigned char courses = 0u;


        fprintf(stdout,"Hey please select courses to register\n");
        char c;
        fprintf(stdout,"Do you want to register for JSPD [y/n]\n");
        c = getchar();
        if (c == 'y')
                courses |= jspd;
        while ((c = getchar()) != '\n' && c != EOF) { }
        fprintf(stdout,"Do you want to register for Applied stochastic proccess [y/n]\n");
        char w = getchar();
        if (w == 'y')
        	courses |= asp;
        fprintf(stdout,"Do you want to register for Data inference and applied machine learning [y/n]\n");
        while ((c = getchar()) != '\n' && c != EOF) { }
         c = getchar();
        if (c == 'y')
                courses |= diaml;
        fprintf(stdout,"Do you want to register for Internet of things [y/n]\n");
        while ((c = getchar()) != '\n' && c != EOF) { }
        c = getchar();
        if (c == 'y')
                courses |=iot;
        fprintf(stdout,"Your courses are \n");

//        fprintf(stdout,"IT is %u",(courses & 1<<1));
	if ((courses & jspd)==jspd)
                fprintf(stdout,"\tJava for Smart Pone Development\n");
     	
	 if ((courses & asp)==asp)
                fprintf(stdout,"\tApplied stochastic processes\n");
         if ((courses & diaml)==diaml)
                fprintf(stdout,"\tData inference and applied machine learning\n");
	if ((courses & iot)==iot)
		fprintf(stdout,"\tInternet of things\n");
}



