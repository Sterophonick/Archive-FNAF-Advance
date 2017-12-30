#include <stdlib.h>
char bonnie;

	int r4 = rand(4) % 5;
		int r5 = rand(10) % 15;

void beingdining(){
	Sleep(r5 * 255);
	if() {
		if(Not(Camera==1b)) {
			Bonnie="1b";
			beingdining();
		}else{
			if(Not(Camera==3)) {
				Bonnie="3";
				beingcloset();
			}else{
				if(Not(Camera==2b)) {
					Bonnie="2b";
					beingwesthallcorner();
				}else{
					if(Not(Camera==2a)) {
						Bonnie="2a";
						beingwesthall();
					}else{
						Bonnie="1b";
						beingdining();
					}
				}
			}
		}
	}
}

void beingwesthallcorner(){
	int r = rand(15) % 20;
	int r2 = rand(1) % 2;
	int r3 = rand(180/Night) % (200/Night);
	if(Not(And((Camera.up==1), (Bonnie==Camera))){
		if(buttonleft == 00){
			Bonnie = "Office";
			beingoffice();
		}else{
			if(r2 == 1){
				if(Not(And(Camera=="2a"), (Foxy Status==Run))){
					Bonnie="2a";
					beingwesthall();
				}else{
					Bonnie="2b";
					beingwesthallcorner();
				}
			}else{
				if(Not(Camera==3)){
					Bonnie="3";
					beingcloset();
				}else{
					Bonnie="2b";
					beingwesthallcorner();
				}
			}
		}
	}else{
		Bonnie="2b";
		beingwesthallcorner();
	}
}

void beingbackstage(){
	Sleep(r5 * 255);
	if(Not(And(Camera.up==1), (Bonnie==Camera))) {
		if(Not(Camera=1b)) {
			Bonnie="1b";
			beingdining();
		}else{
			Bonnie="5";
			beingbackstage();
		}
	}else{
		Bonnie="5";
		beingbackstage();
	}
}

void beingstage(){
	Sleep(r5 * 255);
	if(Not(And(Camera.up==1), (Bonnie==Camera))){
		if(Not(Camera=="1a")){
			Bonnie = "1a";
			beingstage();
		}else{
			Bonnie = "5";
			beingbackstage();
		}
	}else{
		Bonnie="5";
		beingbackstage();
	}
}

void startbonnie(){
	Hacked=0;
	waitsecs(r3);
	beingstage();
	Hacked=1;
	waitsecs(r4);
	hacked=0;
}
