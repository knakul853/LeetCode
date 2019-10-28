bool is_valid(char*ptr)
{
    while(*ptr)
    {
        if(*ptr >='0' && *ptr<='9')ptr++;
        else return 0;
    }
    return 1;
}

bool ok(char* ptr)
{
   int j=0;
   for(int i=0;i<strlen(ptr);i++)
   {
       if(ptr[i]=='0')j++;
       else break;
   }
   int num=0;
   for(int i=0;i<strlen(ptr);i++)
   {
       num = num*10 + ptr[i]-'0';
   }

    if(j>0 && strlen(ptr)>1)return false;
    return num<=255&& num>=0;
}
int isValid(char *ip)
{
     int n = strlen(ip);
     if(n==0)return 0;
     int dot=0;
     for(int i=0;i<n;i++)
        if(ip[i]=='.')dot++;
    if(dot!=3)return 0;
    char *token = strtok(ip,".");
    int sz =0;
    while(token)
    {
        sz++;
        bool res = is_valid(token);
        if(!res)return 0;
       
            if(!ok((token)))return 0;
        
        token = strtok(NULL , ".");
    }
    if(sz!=4)return 0;
    
    return 1;
    
}
