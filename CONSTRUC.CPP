#include "iostream"
#include<string.h>
using namespace std;

//#include<conio.h>
#include<stdio.h>
class garments
{
	private:
	float gprice;
	int gsize;
	char gcode[10],gtype[10],gfabric[10];
	public:
	garments(){
		strcpy(gcode,"not alloted");
		strcpy(gtype,"not alloted");
		gprice=0;
		gsize=0;
		strcpy(gfabric,"not alloted");
	}
	~garments(){
		cout<<"Distructor is called";
	}
	void get(){
		cout<<"garment code ";
		gets(gcode);
		cout<<"garment type ";
		gets(gtype);
		cout<<"garment fabric ";
		gets(gfabric);
	}
	void display()
	{
		cout<<"Code "<<gcode<<endl;
		cout<<"Type "<<gtype<<endl;
		cout<<"Fabric "<<gfabric<<endl;
		cout<<"Price "<<gprice<<endl;
	}
	void assign()
	{
		if(strcmp(gfabric,"cotton")==0)
		{
				if(strcmp(gtype,"trouser")==0){
				gprice=1300;
			}
			else if(strcmp(gtype,"shirt")==0){
				gprice=1100;

			}
		}
		else{
			if(strcmp(gtype,"trouser")==0){
				gprice=1300-1300*.1;
			}
			else if(strcmp(gtype,"shirt")==0){
				gprice=1100-1100*.1;

			}
		}

	}
 };
 int main()
 {
	garments g;
	g.get();
	g.assign();
	g.display();
	return 0;
 }