#include <stdio.h>

struct {
	unsigned int jspd : 1;
	unsigned int asp : 1;
	unsigned int diaml : 1;
	unsigned int iot : 1;
}options;

int main (){
	options.jspd=options.asp=options.diaml=options.iot=0;
	fprintf(stdout,"Hey please select courses to register\n");
	char c;
	fprintf(stdout,"Do you want to register for JSPD [y/n]\n");
	c = getchar();
	if (c == 'y')
		options.jspd=1;
	while ((c = getchar()) != '\n' && c != EOF) { }
	fprintf(stdout,"Do you want to register for Applied stochastic proccess [y/n]\n");
        char w = getchar();
        if (w == 'y')
                options.asp=1;
 	fprintf(stdout,"Do you want to register for Data inference and applied machine learning [y/n]\n");
        while ((c = getchar()) != '\n' && c != EOF) { }
	 c = getchar();
        if (c == 'y')
                options.diaml=1;
	fprintf(stdout,"Do you want to register for Internet of things [y/n]\n");
        while ((c = getchar()) != '\n' && c != EOF) { }
	c = getchar();
        if (c == 'y')
                options.iot=1;
	fprintf(stdout,"Your courses are \n");
	
	if (options.jspd == 1)
                fprintf(stdout,"\tJava for Smart Pone Development\n");
	 if (options.asp == 1)
                fprintf(stdout,"\tApplied stochastic processes\n");
	 if (options.diaml == 1)
	        fprintf(stdout,"\tData inference and applied machine leanring \n");
	 if (options.iot == 1)
                fprintf(stdout,"\tInternet of things\n");

//	fprintf(stdout,options.applied_stochastic);
}
