void chicastart()
{
	chicastage();
}

void chicastage()
{
	Sleep((rand(16 % 21)) *255);
	if(!((camerup==1)&&(chica==camera)))
	{
		if(!(camera==1b))
		{
			chica=1b;
			chicadining();
		}else{
			chica=1a;
			chicastage();
		}
	}else{
		chica=1a
		chicastage();
	}
}
