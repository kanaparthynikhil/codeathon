/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
struct Plan{
    char PlanName[20];
    int MonthlyRental;
    int FreeInternet;
    int FreeCalls;
    int FreeSMS;
    int CallCharges;
    int SMSCharges;
    int DataCharges;
    int RoamingCharges;
    
};
int main()
{
    int n,i,ch,g;
    printf("Enter the no.of plans");
    scanf("%d",&n);
    struct Plan p[n];
    for(i=0;i<n;i++)
        {
        printf("Enter the plan Name %d",i+1);
        scanf("%s",p[i].PlanName);
        printf("Enter the MonthlyRental of plan %d in rupees",i+1);
        scanf("%d",p[i].MonthlyRental);
        printf("Enter FreeInternet per day of plan %d in GB",i+1);
        scanf("%d",p[i].FreeInternet);
        printf("Enter FreeCalls per day of plan %d in Minutes",i+1);
        scanf("%d",p[i].FreeCalls);
        printf("Enter FreeSMS per day of plan %d",i+1);
        scanf("%d",p[i].FreeSMS);
        printf("Enter CallCharges per min of plan %d in rupees",i+1);
        scanf("%d",p[i].CallCharges);
        printf("Enter SMSCharges per sms of plan %d in rupees",i+1);
        scanf("%d",p[i].SMSCharges);
        printf("Enter DataCharges per kb of plan %d in rupees",i+1);
        scanf("%d",p[i].DataCharges);
        printf("Enter RoamingCharges per min of plan %d in rupees",i+1);
        scanf("%d",p[i].RoamingCharges);
        printf("New plan Added");
        }
        printf("All plan details\n");
        for(i=0;i<n;i++)
        {
        printf("Plan Name %d : %s\n",i+1,p[i].PlanName);
       
        printf("MonthlyRental of plan %d in rupees\n",i+1,p[i].MonthlyRental);
        
        printf("FreeInternet per day of plan %d in GB\n",i+1,p[i].FreeInternet);
       
        printf("FreeCalls per day of plan %d in Minutes\n",i+1,p[i].FreeCalls);
       
        printf("FreeSMS per day of plan %d\n",i+1,p[i].FreeSMS);
        
        printf("CallCharges per min of plan %d in rupees\n",i+1,p[i].CallCharges);
       
        printf("SMSCharges per sms of plan %d in rupees\n",i+1,p[i].SMSCharges);
        
        printf("DataCharges per kb of plan %d in rupees\n",i+1,p[i].DataCharges);
        
        printf("RoamingCharges per min of plan %d in rupees\n",i+1,p[i].RoamingCharges);
       
        }
        while(1)
        {
            printf("Enter Choice\n 1:MonthlyRental \n2:FreeInternet\n3:FreeCalls\n4:FreeSMS\n");
            scanf("%d",&g);
            switch(g)
            {
                case 1:
                for(i=0;i<n;i++)
                {
                    printf("MonthlyRental of Plan%d is %d",i+1,p[i].MonthlyRental);
                }
                break;
                
                case 2:
                
                 for(i=0;i<n;i++)
                {
                    printf("FreeInternet of Plan%d is %dGB/day",i+1,p[i].FreeInternet);
                }
                break;
                
                case 3:
                for(i=0;i<n;i++)
                {
                    printf("FreeCalls of Plan%d is %dminutes/day",i+1,p[i].FreeCalls);
                }
                break;
                
                case 4:
                for(i=0;i<n;i++)
                {
                    printf("FreeSMS of Plan%d is %dSMS/day",i+1,p[i].FreeSMS);
                }
                break;
                
                default:printf("Enter the choices 1 2 3 or 4");
                
            }
            
        }
return 0;
                
}




   