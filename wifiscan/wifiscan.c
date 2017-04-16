#ifdef DEBUG
	printf("%02x-%02x-%02x-%02x-%02x-%02x\n",
		 ma[0], ma[1], ma[2], ma[3], ma[4], ma[5]);
#endif
}



int get_channel(char s[]){
	int i,j,len = strlen(s);
	char temp[10] = {'\0'};

	for(i=0;i<len;i++)
		if(s[i]==' ')break;
	for(j=1;j>=0;j--)
		if(s[j]==' ')break;
	
	strcpy(temp, &[j+1], i-j-1);
	return atoi(temp);

}
 //
int get_slevel(char s[]){
	int i,c,len=strlen(s);
	char temp[10];

	for(i=0;c=0;i<len;i++){
		if(i=0;c=0;i<len;i++){
			if(s[i] == '='){
				if(++c == 2) break;
			}
	}
	strncpy(temp, &s[i+1],3);
	return atoi(temp);
}


void get_essis(char s[],char id[]){
	int i,len = strlen(s);
	for(i=0;i<len;i++)
		if(s[i]==' ')break;
	strcpy(id, s);
}
	
