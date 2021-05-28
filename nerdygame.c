#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct wari {
	int damage;
	int health;
	int luck;
	int agility;
	int armor;
	int level;
	int xp;
	int money;
	int demagemoney;
	int agimoney;
	int luckmoney;
	int armormoney;
};
typedef struct wari warior ;
warior atack(warior,warior);
void wakeup();
int adv(warior);
int main()
{
	warior asi;
	asi.agility=10;
	asi.armor=10;
	asi.damage=10;
	asi.health=100;
	asi.level=1;
	asi.luck=10;
	asi.money=0;
	asi.xp=0;
	asi.armormoney=2;
	asi.demagemoney=2;
	asi.agimoney=2;
	asi.luckmoney=2;
	while(asi.health>0)
	{
		int cho;
		pr("Good mornin honey.What will you do?\n");
		pr("1-Go for adv.	2-Upgrade	3-Drink bat soap\n");
		sc("%d",&cho);
		
		if(cho==1)
			{
				pr("Such a sexy man!\n");
				adv(asi);
			}
		if(cho==2)
			{
			//	pr("Here it comes!\n");
				//upr();
			}
			else
			{
				pr("Mýtsubishi Hyundayi\n");
				asi.health=-5;
			}
	}
return 0;	
}
int adv(warior wari)
{
	warior enemy;
	int enepo=wari.level*10;//enemypower
//	enemy.agility=(enepo)/(rand()%10);
	enemy.armor=(enepo)/(rand()%10);
	enemy.damage=(enepo)/(rand()%10);
	enemy.health=100;
	//enemy.luck=(enepo)/(rand()%10);
 
		atack(wari,enemy);
	return wari.health;
}

warior atack(warior wari,warior enemy)
{	while((wari.health>0)&&(enemy.health>0))
	{
		pr("You attacked!\n");
		enemy.health=enemy.health-wari.damage/(enemy.armor/5);
		pr("It attacked\n");
		wari.health=wari.health-enemy.damage/(wari.armor/10);
		pr("Ur health=%d\nIblisin health=%d\n",wari.health,enemy.health);
	}
}

