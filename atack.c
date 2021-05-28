#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct warior
{
	int attack;
	int health;
	int level;
	int money;
	int armor;
};
typedef struct warior wari;
int fght(wari*);
int main()
{
	wari ozan;
	ozan.health=50;
	ozan.level=1;
	ozan.money=0;
	ozan.armor=1;
	int xp=0;
	while(ozan.health>0)
	{
		int cho;
		ozan.attack=ozan.level*2;
		//ozan.health+=ozan.level;
		pr("What you gonna do?(health=%d,level=%d,atack=%d,money=%d,armor=%d)",ozan.health ,ozan.level,ozan.attack,ozan.money,ozan.armor);
		pr("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		pr("1-Go fight	2-sleep(Costs:%d)	3-Armor up(Costs:%d)\n",ozan.level*40,ozan.armor*15);		
		sc("%d",&cho);
		if(cho==1)
			{
				fght(&ozan);
				xp++;
				if(xp>=ozan.level)
				{
					ozan.level++;
					xp=0;
				}
			}
		else if(cho==2)
			{
				if(ozan.money>=ozan.level*40)
				{
					ozan.money-=ozan.level*40;
					ozan.health+=ozan.level*10;
				}
				else
				pr("You don't have enough money\n\n\n");
			}
		else if(cho==3)
		{
			if(ozan.money>=ozan.armor*15)
			{
				ozan.money-=ozan.armor*15;
				ozan.armor++;
			}
		}
	}
}
int fght(wari*warior)
{
	warior->money=warior->level*40;
	wari enemy;
	enemy.attack=warior->level*2;
	enemy.health=warior->level*20;
	while((warior->health>0)&&(enemy.health>0))
	{
		pr("You did atack\n");
		if(warior->level*(rand()%100)>=150)
		{
			enemy.health-=3*warior->attack;
			pr("Critic!!its health=%d\n",enemy.health);
		}
		else
		{
			enemy.health-=warior->attack;
			pr("its health=%d\n",enemy.health);
		}
		
		
		pr("it did atack\n");	
		if(warior->level*(rand()%100)>=150)
		{
			warior->health-=(2*enemy.attack)/warior->armor;
			pr("Critic!Ur health=%d\n",warior->health);
		}
		else
			warior->health-=(enemy.attack)/warior->armor;
		pr("Ur health=%d\n",warior->health);
	}
}

