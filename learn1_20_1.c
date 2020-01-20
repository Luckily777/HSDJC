//最后一个单词的长度
int lengthOfLastWord(char * s){
	int len = strlen(s);
	int n = 0;
	for (int i = 0; i<len; i++)
	{
		if (s[i] != ' ')
		{
			n++;
		}
		else
		{
			for (int j = i; j<len; j++)
			{
				if (s[j] != ' ')
				{
					n = 0;
				}
			}
		}
	}
	return n;
}