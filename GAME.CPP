/*________________________THIS IS C++ PROGRAM OF GAME_______________________*/
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<fstream.h>
union REGS in,out;
void mnscr();
void pause(int);
int x,n,brk=0,y,e=0,si,top=-1,tr[6][2],rt[6][2],ns,j,i,t1,t2,click,xp,yp,k,a[3]={263,261,0},b[3]={407,385,0},c[2]={15,14},d[2]={15,12},p1=10,p2=10,q1=10,q2=10,z,ch1[5],ch2[5];
char b1[7][7],a1[3][3],a2[3][3],a3[4][4],a4[4][4],a5[5][5],a6[5][5],c1[3],rs1[3][3]={'l','p','7','h','-','t','7','i','j'},rs2[3][3]={'f','j','7','I','h','-','H','I','i'},te,rs3[4][4]={'h','-','I','I','7','f','t','I','I','p','i','j','p','7','l','H'},rs4[4][4]={'7','-','-','l','-','7','-','-','l','0','0','t','-','j','-','H'},rs5[5][5]={'i','l','f','-','p','0','f','j','7','l','I','0','-','0','t','j','f','i','0','j','7','-','l','t','-'},rs6[5][5]={'i','0','i','l','I','7','0','-','0','h','h','7','7','0','0','j','0','-','j','f','j','t','-','0','t'};
void mouseposi(int &xpos,int&ypos,int &click)
{in.x.ax=3;
int86(51,&in,&out);
click=out.x.bx;
xpos=out.x.cx;
ypos=out.x.dx;}
void cexit()
{setcolor(6);
rectangle(160,120,478,358);
setfillstyle(1,14);floodfill(400,300,6);floodfill(165,125,6);
settextstyle(1,0,5);
outtextxy(x-50,y-110,"EXIT");
setcolor(1);outtextxy(x-145,y-60,"Are you sure?");
setcolor(2);line(266,176,358,176);
setcolor(8);setfillstyle(1,12);
bar3d(232,243,393,283,5,2);bar3d(232,303,393,343,5,2);
settextstyle(10,0,3);
setcolor(9);outtextxy(280,233,"Yes");setfillstyle(1,9);floodfill(290,264,9);floodfill(335,258,9);floodfill(309,267,9);
outtextxy(292,293,"No");floodfill(306,331,9);floodfill(331,328,9);
in.x.ax=7;in.x.cx=160;in.x.dx=478;int86(51,&in,&out);
in.x.ax=8;in.x.cx=120;in.x.dx=358;int86(51,&in,&out);
in.x.ax=1;int86(51,&in,&out);
while(1)
{mouseposi(xp,yp,click);
if((click==1)&&(xp>232)&&(xp<393)&&(yp<283)&&(yp>243))
{while(click==1)
{mouseposi(xp,yp,click);j=0;}
exit(1);}
mouseposi(xp,yp,click);
if((click==1)&&(xp>232)&&(xp<393)&&(yp<343)&&(yp>303))
{while(click==1)
{mouseposi(xp,yp,click);j=0;}
in.x.ax=2;int86(51,&in,&out);cleardevice();
mnscr();}
}
}
void loading()
{//setbkcolor(15);
cleardevice();
setcolor(15);rectangle(0,0,638,478);setfillstyle(1,15);floodfill(4,4,15);
setcolor(4);
settextstyle(7,0,10);putpixel(x,y,11);
outtextxy(x-110,y-100,"CTC");
setcolor(9);setlinestyle(0,1,3);line(197,267,441,267);
setcolor(1);line(197,271,441,271);
setfillstyle(1,4);
floodfill(214,217,4);floodfill(309,227,4);floodfill(369,218,4);
floodfill(304,257,4);floodfill(273,189,4);floodfill(429,189,4);
setfillstyle(1,14);
floodfill(371,234,4);floodfill(215,233,4);floodfill(324,192,4);
setcolor(8);rectangle(159,428,478,447);
for(i=0;i<4;i++)
{settextstyle(3,0,4);setcolor(1);
outtextxy(x-70,y+150,"LOADING.");for(j=159+i*26*3;j<186+i*26*3;j++){line(j,428,j,447);delay(10);}//delay(500);
outtextxy(x-70,y+150,"LOADING..");for(j=186+i*26*3;j<212+i*26*3;j++){line(j,428,j,447);delay(10);}//delay(500);
outtextxy(x-70,y+150,"LOADING...");for(j=212+i*26*3;j<238+i*26*3;j++){line(j,428,j,447);delay(10);}//delay(500);
setcolor(15);
outtextxy(x-59,y+150,"       ...");delay(10);
}
delay(100);setcolor(1);for(j=472;j<478;j++){line(j,428,j,447);delay(50);}
//mnscr();
}
void game()
{setcolor(15);rectangle(0,0,638,490);setfillstyle(1,15);floodfill(4,4,15);
setcolor(4);
settextstyle(7,0,9);putpixel(x,y,11);
outtextxy(x-(110+180),y-(100+130),"CTC");
setfillstyle(1,4);floodfill(30,81,4);floodfill(77,46,4);floodfill(103,78,4);floodfill(147,80,4);floodfill(194,46,4);floodfill(46,44,4);floodfill(39,52,4);floodfill(162,45,4);floodfill(156,52,4);bar3d(97,97,101,102,0,1);
setfillstyle(1,14);floodfill(34,81,4);floodfill(106,78,4);floodfill(150,80,4);
setcolor(9);setlinestyle(0,1,3);line(23,106,199,106);
setcolor(1);line(23,110,199,110);
setcolor(0);line(225,0,225,478);
setcolor(10);line(56,167,164,167);
setcolor(6);setfillstyle(1,9);bar3d(50,196,172,230,0,0);setcolor(15);settextstyle(1,0,4);outtextxy(74,193,"Time");
setcolor(6);rectangle(50,230,172,290);
setcolor(0);circle(112,420,50);ellipse(127,405,0,360,2,4);ellipse(97,405,0,360,2,4);setlinestyle(0,1,3);ellipse(112,430,200,340,25,20);
setfillstyle(1,14);floodfill(111,423,0);
setcolor(8);setfillstyle(1,12);bar3d(35,310,187,350,5,2);
setcolor(9);settextstyle(10,0,3);outtextxy(61,300,"Pause");setfillstyle(1,9);floodfill(68,331,9);floodfill(85,340,9);floodfill(116,342,9);floodfill(136,341,9);floodfill(147,335,9);
setcolor(0);setfillstyle(1,6);bar3d(281,100,581,400,0,2);
//getch();cexit();
}
void build(int s,int n)
{setcolor(0);setfillstyle(1,6);bar3d(281+p2*s,100+p1*s,281+p2*s+s,100+p1*s+s,0,2);bar3d(281+q2*s,100+q1*s,281+q2*s+s,100+q1*s+s,0,2);
j=s;
for(i=1;i<n;i++)
{setcolor(0);line(281+j,100,281+j,400);line(281,100+j,581,100+j);
 j=j+s;}
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
{
 if(b1[j][i]=='I')for(k=0;k<s/13;k=k+2){line(281+i*s+s/2+k,100+j*s,281+i*s+s/2+k,100+j*s+s);line(281+i*s+s/2-k,100+j*s,281+i*s+s/2-k,100+j*s+s);}
 if(b1[j][i]=='l')for(k=0;k<s/13;k=k+2){arc(281+i*s+s,100+j*s,180,270,s/2+k);arc(281+i*s+s,100+j*s,180,270,s/2-k);}
 if(b1[j][i]=='j')for(k=0;k<s/13;k=k+2){arc(281+i*s,100+j*s,270,360,s/2+k);arc(281+i*s,100+j*s,270,360,s/2-k);}
 if(b1[j][i]=='H')for(k=0;k<s/13;k=k+2){line(281+i*s+s/2+k,100+j*s,281+i*s+s/2+k,100+j*s+s);line(281+i*s+s/2-k,100+j*s,281+i*s+s/2-k,100+j*s+s);line(281+i*s,100+j*s+s/2+k,281+i*s+s/2,100+j*s+s/2+k);line(281+i*s,100+j*s+s/2-k,281+i*s+s/2,100+j*s+s/2-k);}
 if(b1[j][i]=='i')for(k=0;k<s/13;k=k+2){line(281+i*s,100+j*s+s/2+k,281+i*s+s,100+j*s+s/2+k);line(281+i*s,100+j*s+s/2-k,281+i*s+s,100+j*s+s/2-k);line(281+i*s+s/2+k,100+j*s,281+i*s+s/2+k,100+j*s+s/2);line(281+i*s+s/2-k,100+j*s,281+i*s+s/2-k,100+j*s+s/2);}
 if(b1[j][i]=='f')for(k=0;k<s/13;k=k+2){arc(281+i*s+s,100+j*s+s,90,180,s/2+k);arc(281+i*s+s,100+j*s+s,90,180,s/2-k);}
 if(b1[j][i]=='p')for(k=0;k<s/13;k=k+2){line(281+i*s,100+j*s+s/2+k,281+i*s+s,100+j*s+s/2+k);line(281+i*s,100+j*s+s/2-k,281+i*s+s,100+j*s+s/2-k);line(281+i*s+s/2+k,100+j*s,281+i*s+s/2+k,100+j*s+s);line(281+i*s+s/2-k,100+j*s,281+i*s+s/2-k,100+j*s+s);}
 if(b1[j][i]=='h')for(k=0;k<s/13;k=k+2){line(281+i*s+s/2+k,100+j*s,281+i*s+s/2+k,100+j*s+s);line(281+i*s+s/2-k,100+j*s,281+i*s+s/2-k,100+j*s+s);line(281+i*s+s,100+j*s+s/2+k,281+i*s+s/2,100+j*s+s/2+k);line(281+i*s+s,100+j*s+s/2-k,281+i*s+s/2,100+j*s+s/2-k);}
 if(b1[j][i]=='-')for(k=0;k<s/13;k=k+2){line(281+i*s,100+j*s+s/2+k,281+i*s+s,100+j*s+s/2+k);line(281+i*s,100+j*s+s/2-k,281+i*s+s,100+j*s+s/2-k);}
 if(b1[j][i]=='t')for(k=0;k<s/13;k=k+2){line(281+i*s,100+j*s+s/2+k,281+i*s+s,100+j*s+s/2+k);line(281+i*s,100+j*s+s/2-k,281+i*s+s,100+j*s+s/2-k);line(281+i*s+s/2+k,100+j*s+s,281+i*s+s/2+k,100+j*s+s/2);line(281+i*s+s/2-k,100+j*s+s,281+i*s+s/2-k,100+j*s+s/2);}
 if(b1[j][i]=='7')for(k=0;k<s/13;k=k+2){arc(281+i*s,100+j*s+s,0,90,s/2+k);arc(281+i*s,100+j*s+s,0,90,s/2-k);}
 if(b1[j][i]=='0'){setfillstyle(5,8);bar3d(281+i*s,100+j*s,281+i*s+s,100+j*s+s,0,2);}
}}
}
void won(int li)
{in.x.ax=2;int86(51,&in,&out);
setfillstyle(1,14);floodfill(281+li/2,80,0);floodfill(281+li/2,37,0);
setcolor(12);line(281+li/2+35,51,281+li/2+45,48);line(281+li/2+13,27,281+li/2+17,17);line(281+li/2-19,27,281+li/2-23,17);line(281+li/2-41,51,281+li/2-51,48);
delay(2000);
setcolor(6);
bar3d(160,150,478,328,0,2);;
settextstyle(1,0,6);
setcolor(1);outtextxy(x-114,y-45,"You Won");
setcolor(6);settextstyle(3,0,4);outtextxy(x-108,y+30,"Press any key");
getch();
mnscr();
}
void lost()
{in.x.ax=2;int86(51,&in,&out);setcolor(6);
setfillstyle(1,14);bar3d(160,150,478,328,0,2);;
settextstyle(1,0,6);
setcolor(1);outtextxy(x-135,y-45,"You Failed");
setcolor(6);settextstyle(3,0,4);outtextxy(x-108,y+30,"Press any key");
getch();
mnscr();
}
void check(int ss,int nn)
{
e=0;
for(i=0;i<=5;i++)
{b1[i][0]='0';b1[0][i]='0';b1[i][nn+1]='0';b1[nn+1][i]='0';}
ch1[0]=1;ch2[0]=1;ch1[1]=0;ch2[1]=1;
while(e!=nn*nn)
{ch1[2]=ch1[0];ch2[2]=ch2[0];
//cout<<ch1[0]<<" "<<ch2[0]<<"	";
if(b1[ch1[0]][ch2[0]]=='I')
{if(ch1[0]==ch1[1]+1){if((b1[ch1[0]+1][ch2[0]]!='f')&&(b1[ch1[0]+1][ch2[0]]!='0')&&(b1[ch1[0]+1][ch2[0]]!='7')&&(b1[ch1[0]+1][ch2[0]]!='t')&&(b1[ch1[0]+1][ch2[0]]!='-')){ch1[1]=ch1[0];ch2[1]=ch2[0];ch1[0]++;}}
else if((ch1[0]==ch1[1]-1)&&(b1[ch1[0]-1][ch2[0]]!='l')&&(b1[ch1[0]-1][ch2[0]]!='0')&&(b1[ch1[0]-1][ch2[0]]!='j')&&(b1[ch1[0]-1][ch2[0]]!='i')&&(b1[ch1[0]-1][ch2[0]]!='-')){ch1[1]=ch1[0];ch2[1]=ch2[0];ch1[0]--;}}
//cout<<ch1[0]<<" "<<ch2[0]<<"	";
if(b1[ch1[0]][ch2[0]]=='l')
{if((ch1[0]==ch1[1]+1)&&(b1[ch1[0]][ch2[0]+1]!='I')&&(b1[ch1[0]][ch2[0]+1]!='l')&&(b1[ch1[0]][ch2[0]+1]!='f')&&(b1[ch1[0]][ch2[0]+1]!='h')&&(b1[ch1[0]][ch2[0]+1]!='0')){ch1[1]=ch1[0];ch2[1]=ch2[0];ch2[0]++;}
else if((ch2[0]==ch2[1]-1)&&(b1[ch1[0]-1][ch2[0]]!='l')&&(b1[ch1[0]-1][ch2[0]]!='0')&&(b1[ch1[0]-1][ch2[0]]!='j')&&(b1[ch1[0]-1][ch2[0]]!='i')&&(b1[ch1[0]-1][ch2[0]]!='-')){ch1[1]=ch1[0];ch2[1]=ch2[0];ch1[0]--;}}
//cout<<ch1[0]<<" "<<ch2[0]<<"	";
if(b1[ch1[0]][ch2[0]]=='j')
{if((ch1[0]==ch1[1]+1)&&(b1[ch1[0]][ch2[0]-1]!='I')&&(b1[ch1[0]][ch2[0]-1]!='j')&&(b1[ch1[0]][ch2[0]-1]!='H')&&(b1[ch1[0]][ch2[0]-1]!='7')&&(b1[ch1[0]][ch2[0]-1]!='0')){ch1[1]=ch1[0];ch2[1]=ch2[0];ch2[0]--;}
else if((ch2[0]==ch2[1]+1)&&(b1[ch1[0]-1][ch2[0]]!='l')&&(b1[ch1[0]-1][ch2[0]]!='0')&&(b1[ch1[0]-1][ch2[0]]!='j')&&(b1[ch1[0]-1][ch2[0]]!='i')&&(b1[ch1[0]-1][ch2[0]]!='-')){ch1[1]=ch1[0];ch2[1]=ch2[0];ch1[0]--;}}
//cout<<ch1[0]<<" "<<ch2[0]<<"	";
if(b1[ch1[0]][ch2[0]]=='f')
{if((ch2[0]==ch2[1]-1)&&(b1[ch1[0]-1][ch2[0]]!='l')&&(b1[ch1[0]-1][ch2[0]]!='0')&&(b1[ch1[0]-1][ch2[0]]!='j')&&(b1[ch1[0]-1][ch2[0]]!='i')&&(b1[ch1[0]-1][ch2[0]]!='-')){ch1[1]=ch1[0];ch2[1]=ch2[0];ch1[0]++;}
else if((ch1[0]==ch1[1]-1)&&(b1[ch1[0]][ch2[0]+1]!='I')&&(b1[ch1[0]][ch2[0]+1]!='l')&&(b1[ch1[0]][ch2[0]+1]!='f')&&(b1[ch1[0]][ch2[0]+1]!='h')&&(b1[ch1[0]][ch2[0]+1]!='0')){ch1[1]=ch1[0];ch2[1]=ch2[0];ch2[0]++;}}
//cout<<ch1[0]<<" "<<ch2[0]<<"	";
if(b1[ch1[0]][ch2[0]]=='-')
{if((ch2[0]==ch2[1]+1)&&(b1[ch1[0]][ch2[0]+1]!='I')&&(b1[ch1[0]][ch2[0]+1]!='l')&&(b1[ch1[0]][ch2[0]+1]!='f')&&(b1[ch1[0]][ch2[0]+1]!='h')&&(b1[ch1[0]][ch2[0]+1]!='0')){ch1[1]=ch1[0];ch2[1]=ch2[0];ch2[0]++;}
else if((ch2[0]==ch2[1]-1)&&(b1[ch1[0]][ch2[0]-1]!='I')&&(b1[ch1[0]][ch2[0]-1]!='j')&&(b1[ch1[0]][ch2[0]-1]!='H')&&(b1[ch1[0]][ch2[0]-1]!='7')&&(b1[ch1[0]][ch2[0]-1]!='0')){ch1[1]=ch1[0];ch2[1]=ch2[0];ch2[0]--;}}
//cout<<ch1[0]<<" "<<ch2[0]<<"	";
if(b1[ch1[0]][ch2[0]]=='7')
{if((ch2[0]==ch2[1]+1)&&(b1[ch1[0]+1][ch2[0]]!='f')&&(b1[ch1[0]+1][ch2[0]]!='0')&&(b1[ch1[0]+1][ch2[0]]!='7')&&(b1[ch1[0]+1][ch2[0]]!='t')&&(b1[ch1[0]+1][ch2[0]]!='-')){ch1[1]=ch1[0];ch2[1]=ch2[0];ch1[0]++;}
else if((ch1[0]==ch1[1]-1)&&(b1[ch1[0]][ch2[0]-1]!='I')&&(b1[ch1[0]][ch2[0]-1]!='j')&&(b1[ch1[0]][ch2[0]-1]!='H')&&(b1[ch1[0]][ch2[0]-1]!='7')&&(b1[ch1[0]][ch2[0]-1]!='0')){ch1[1]=ch1[0];ch2[1]=ch2[0];ch2[0]--;}}
//cout<<ch1[0]<<" "<<ch2[0]<<endl;
if((ch1[0]==nn)&&(ch2[0]==nn)&&(b1[nn][nn]!='l')&&(b1[nn][nn]!='j')&&(b1[nn][nn]!='i')&&(b1[nn][nn]!='-'))won(ss);
if(b1[ch1[0]][ch2[0]]=='H')
{
ch1[3]=ch1[0];ch2[3]=ch2[0];ch1[4]=ch1[1];ch2[4]=ch2[1];
if((ch1[0]!=ch1[1]-1)&&(b1[ch1[0]+1][ch2[0]]!='f')&&(b1[ch1[0]+1][ch2[0]]!='0')&&(b1[ch1[0]+1][ch2[0]]!='7')&&(b1[ch1[0]+1][ch2[0]]!='t')&&(b1[ch1[0]+1][ch2[0]]!='-')){ch1[1]=ch1[0];ch2[1]=ch2[0];ch1[0]++;}
if((ch2[3]!=ch2[4]+1)&&(b1[ch1[3]][ch2[3]-1]!='I')&&(b1[ch1[3]][ch2[3]-1]!='j')&&(b1[ch1[3]][ch2[3]-1]!='H')&&(b1[ch1[3]][ch2[3]-1]!='7')&&(b1[ch1[3]][ch2[3]-1]!='0'))
{if((ch1[3]!=ch1[0])||(ch2[3]!=ch2[0])){top++;tr[top][0]=ch1[3];tr[top][1]=ch2[3]-1;rt[top][0]=ch1[3];rt[top][1]=ch2[3];}
if((ch1[3]==ch1[0])&&(ch2[3]==ch2[0])){ch1[1]=ch1[0];ch2[1]=ch2[0];ch2[0]--;}}
if((ch1[3]!=ch1[4]+1)&&(b1[ch1[3]-1][ch2[3]]!='l')&&(b1[ch1[3]-1][ch2[3]]!='0')&&(b1[ch1[3]-1][ch2[3]]!='j')&&(b1[ch1[3]-1][ch2[3]]!='i')&&(b1[ch1[3]-1][ch2[3]]!='-'))
{if((ch1[3]!=ch1[0])||(ch2[3]!=ch2[0])){top++;tr[top][0]=ch1[3]-1;tr[top][1]=ch2[3];rt[top][0]=ch1[3];rt[top][1]=ch2[3];}
if((ch1[3]==ch1[0])&&(ch2[3]==ch2[0])){ch1[1]=ch1[0];ch2[1]=ch2[0];ch1[0]--;}}
}
//cout<<ch1[0]<<" "<<ch2[0]<<"	";
if(b1[ch1[0]][ch2[0]]=='i')
{
ch1[3]=ch1[0];ch2[3]=ch2[0];ch1[4]=ch1[1];ch2[4]=ch2[1];
if((ch2[0]!=ch2[1]-1)&&(b1[ch1[0]][ch2[0]+1]!='I')&&(b1[ch1[0]][ch2[0]+1]!='l')&&(b1[ch1[0]][ch2[0]+1]!='f')&&(b1[ch1[0]][ch2[0]+1]!='h')&&(b1[ch1[0]][ch2[0]+1]!='0')){ch1[1]=ch1[0];ch2[1]=ch2[0];ch2[0]++;}
if((ch2[3]!=ch2[4]+1)&&(b1[ch1[3]][ch2[3]-1]!='I')&&(b1[ch1[3]][ch2[3]-1]!='j')&&(b1[ch1[3]][ch2[3]-1]!='H')&&(b1[ch1[3]][ch2[3]-1]!='7')&&(b1[ch1[3]][ch2[3]-1]!='0'))
{if((ch1[3]!=ch1[0])||(ch2[3]!=ch2[0])){top++;tr[top][0]=ch1[3];tr[top][1]=ch2[3]-1;rt[top][0]=ch1[3];rt[top][1]=ch2[3];}
if((ch1[3]==ch1[0])&&(ch2[3]==ch2[0])) {ch1[1]=ch1[0];ch2[1]=ch2[0];ch2[0]--;}}
if((ch1[3]!=ch1[4]+1)&&(b1[ch1[3]-1][ch2[3]]!='l')&&(b1[ch1[3]-1][ch2[3]]!='0')&&(b1[ch1[3]-1][ch2[3]]!='j')&&(b1[ch1[3]-1][ch2[3]]!='i')&&(b1[ch1[3]-1][ch2[3]]!='-'))
{if((ch1[3]!=ch1[0])||(ch2[3]!=ch2[0])){top++;tr[top][0]=ch1[3]-1;tr[top][1]=ch2[3];rt[top][0]=ch1[3];rt[top][1]=ch2[3];}
if((ch1[3]==ch1[0])&&(ch2[3]==ch2[0])){ch1[1]=ch1[0];ch2[1]=ch2[0];ch1[0]--;}}
}
//cout<<ch1[0]<<" "<<ch2[0]<<"a  	";
if(b1[ch1[0]][ch2[0]]=='h')
{
ch1[3]=ch1[0];ch2[3]=ch2[0];ch1[4]=ch1[1];ch2[4]=ch2[1];
if((ch1[0]!=ch1[1]-1)&&(b1[ch1[0]+1][ch2[0]]!='f')&&(b1[ch1[0]+1][ch2[0]]!='0')&&(b1[ch1[0]+1][ch2[0]]!='7')&&(b1[ch1[0]+1][ch2[0]]!='t')&&(b1[ch1[0]+1][ch2[0]]!='-')){ch1[1]=ch1[0];ch2[1]=ch2[0];ch1[0]++;}
if((ch2[3]!=ch2[4]-1)&&(b1[ch1[3]][ch2[3]+1]!='I')&&(b1[ch1[3]][ch2[3]+1]!='l')&&(b1[ch1[3]][ch2[3]+1]!='h')&&(b1[ch1[3]][ch2[3]+1]!='f')&&(b1[ch1[3]][ch2[3]+1]!='0'))
{if((ch1[3]!=ch1[0])||(ch2[3]!=ch2[0])){top++;tr[top][0]=ch1[3];tr[top][1]=ch2[3]+1;rt[top][0]=ch1[3];rt[top][1]=ch2[3];}
if((ch1[3]==ch1[0])&&(ch2[3]==ch2[0])){ch1[1]=ch1[0];ch2[1]=ch2[0];ch2[0]++;}}
if((ch1[3]!=ch1[4]+1)&&(b1[ch1[3]-1][ch2[3]]!='l')&&(b1[ch1[3]-1][ch2[3]]!='0')&&(b1[ch1[3]-1][ch2[3]]!='j')&&(b1[ch1[3]-1][ch2[3]]!='i')&&(b1[ch1[3]-1][ch2[3]]!='-'))
{if((ch1[3]!=ch1[0])||(ch2[3]!=ch2[0])){top++;tr[top][0]=ch1[3]-1;tr[top][1]=ch2[3];rt[top][0]=ch1[3];rt[top][1]=ch2[3];}
if((ch1[3]==ch1[0])&&(ch2[3]==ch2[0])){ch1[1]=ch1[0];ch2[1]=ch2[0];ch1[0]--;}}
}
//cout<<ch1[0]<<" "<<ch2[0]<<"	";//cout<<"x"<<ch1[3]<<" "<<ch2[3]<<"x";//cout<<"x"<<top<<"x";//if(top>=0)cout<<"x"<<tr[top][0]<<tr[top][1]<<"x";
if(b1[ch1[0]][ch2[0]]=='t')
{
ch1[3]=ch1[0];ch2[3]=ch2[0];ch1[4]=ch1[1];ch2[4]=ch2[1];
if((ch1[0]!=ch1[1]-1)&&(b1[ch1[0]+1][ch2[0]]!='f')&&(b1[ch1[0]+1][ch2[0]]!='0')&&(b1[ch1[0]+1][ch2[0]]!='7')&&(b1[ch1[0]+1][ch2[0]]!='t')&&(b1[ch1[0]+1][ch2[0]]!='-')){ch1[1]=ch1[0];ch2[1]=ch2[0];ch1[0]++;}
if((ch2[3]!=ch2[4]-1)&&(b1[ch1[3]][ch2[3]+1]!='I')&&(b1[ch1[3]][ch2[3]+1]!='l')&&(b1[ch1[3]][ch2[3]+1]!='h')&&(b1[ch1[3]][ch2[3]+1]!='f')&&(b1[ch1[3]][ch2[3]+1]!='0'))
{if((ch1[3]!=ch1[0])||(ch2[3]!=ch2[0])){top++;tr[top][0]=ch1[3];tr[top][1]=ch2[3]+1;rt[top][0]=ch1[3];rt[top][1]=ch2[3];}
if((ch1[3]==ch1[0])&&(ch2[3]==ch2[0])){ch1[1]=ch1[0];ch2[1]=ch2[0];ch2[0]++;}}
if((ch2[3]!=ch2[4]+1)&&(b1[ch1[3]][ch2[3]-1]!='I')&&(b1[ch1[3]][ch2[3]-1]!='j')&&(b1[ch1[3]][ch2[3]-1]!='H')&&(b1[ch1[3]][ch2[3]-1]!='7')&&(b1[ch1[3]][ch2[3]-1]!='0'))
{if((ch1[3]!=ch1[0])||(ch2[3]!=ch2[0])){top++;tr[top][0]=ch1[3];tr[top][1]=ch2[3]-1;rt[top][0]=ch1[3];rt[top][1]=ch2[3];}
if((ch1[3]==ch1[0])&&(ch2[3]==ch2[0])){ch1[1]=ch1[0];ch2[1]=ch2[0];ch2[0]--;}}
}
//cout<<ch1[0]<<" "<<ch2[0]<<"	";
if((ch1[0]==nn)&&(ch2[0]==nn)&&(b1[nn][nn]!='l')&&(b1[nn][nn]!='j')&&(b1[nn][nn]!='i')&&(b1[nn][nn]!='-'))won(ss);
if(b1[ch1[0]][ch2[0]]=='p')
{
ch1[3]=ch1[0];ch2[3]=ch2[0];ch1[4]=ch1[1];ch2[4]=ch2[1];
if((ch1[0]!=ch1[1]-1)&&(b1[ch1[0]+1][ch2[0]]!='f')&&(b1[ch1[0]+1][ch2[0]]!='0')&&(b1[ch1[0]+1][ch2[0]]!='7')&&(b1[ch1[0]+1][ch2[0]]!='t')&&(b1[ch1[0]+1][ch2[0]]!='-')){ch1[1]=ch1[0];ch2[1]=ch2[0];ch1[0]++;}
if((ch2[3]!=ch2[4]-1)&&(b1[ch1[3]][ch2[3]+1]!='I')&&(b1[ch1[3]][ch2[3]+1]!='l')&&(b1[ch1[3]][ch2[3]+1]!='h')&&(b1[ch1[3]][ch2[3]+1]!='f')&&(b1[ch1[3]][ch2[3]+1]!='0'))
{if((ch1[3]!=ch1[0])||(ch2[3]!=ch2[0])){top++;tr[top][0]=ch1[3];tr[top][1]=ch2[3]+1;rt[top][0]=ch1[3];rt[top][1]=ch2[3];}
if((ch1[3]==ch1[0])&&(ch2[3]==ch2[0])){ch1[1]=ch1[0];ch2[1]=ch2[0];ch2[0]++;}}
if((ch2[3]!=ch2[4]+1)&&(b1[ch1[3]][ch2[3]-1]!='I')&&(b1[ch1[3]][ch2[3]-1]!='j')&&(b1[ch1[3]][ch2[3]-1]!='H')&&(b1[ch1[3]][ch2[3]-1]!='7')&&(b1[ch1[3]][ch2[3]-1]!='0'))
{if((ch1[3]!=ch1[0])||(ch2[3]!=ch2[0])){top++;tr[top][0]=ch1[3];tr[top][1]=ch2[3]-1;rt[top][0]=ch1[3];rt[top][1]=ch2[3];}
if((ch1[3]==ch1[0])&&(ch2[3]==ch2[0])){ch1[1]=ch1[0];ch2[1]=ch2[0];ch2[0]--;}}
if((ch1[3]!=ch1[4]+1)&&(b1[ch1[3]-1][ch2[3]]!='l')&&(b1[ch1[3]-1][ch2[3]]!='0')&&(b1[ch1[3]-1][ch2[3]]!='j')&&(b1[ch1[3]-1][ch2[3]]!='i')&&(b1[ch1[3]-1][ch2[3]]!='-'))
{if((ch1[3]!=ch1[0])||(ch2[3]!=ch2[0])){top++;tr[top][0]=ch1[3]-1;tr[top][1]=ch2[3];rt[top][0]=ch1[3];rt[top][1]=ch2[3];}
if((ch1[3]==ch1[0])&&(ch2[3]==ch2[0])){ch1[1]=ch1[0];ch2[1]=ch2[0];ch1[0]--;}}
}//cout<<ch1[0]<<" "<<ch2[0]<<endl;
if(e==nn*nn)lost;
if((ch1[0]==nn)&&(ch2[0]==nn)&&(b1[nn][nn]!='l')&&(b1[nn][nn]!='j')&&(b1[nn][nn]!='i')&&(b1[nn][nn]!='-'))won(ss);
if((ch1[2]==ch1[0])&&(ch2[2]==ch2[0]))
{if((ch1[0]==nn)&&(ch2[0]==nn)&&(b1[nn][nn]!='l')&&(b1[nn][nn]!='j')&&(b1[nn][nn]!='i')&&(b1[nn][nn]!='-'))won(ss);
if(top==-1)lost();
if(top>=0){ch1[0]=tr[top][0];ch2[0]=tr[top][1];
ch1[1]=rt[top][0];ch2[1]=rt[top][1];top--;}
}
if(top!=-1)
{for(i=0;i<=top;i++)
{if((ch1[0]==tr[i][0])&&(ch2[0]==tr[i][1]))
{for(j=i;j<top;j++)
{tr[j][0]=tr[j+1][0];tr[j][1]=tr[j+1][1];}top--;}}}
e=e+1;//cout<<e;
if(e==nn*nn)lost;
}
lost();
}
void time()
{
c1[0]=t1;c1[1]=t2;setcolor(15);setfillstyle(1,15);bar3d(82,240,135,280,0,2);
setcolor(1);settextstyle(1,0,5);outtextxy(87,234,c1);
}
void lvl1()
{setcolor(1);settextstyle(3,0,4);outtextxy(60,130,"Level 1");
setcolor(0);line(381,100,381,400);line(481,100,481,400);line(281,200,581,200);line(281,300,581,300);
for(i=0;i<3;i++)
{for(j=0;j<3;j++)a1[j][i]=rs1[j][i];}
for(i=0;i<3;i++)
{for(j=0;j<3;j++)b1[j][i]=a1[j][i];}si=100;ns=3;
build(100,3);setfillstyle(1,0);bar3d(281+si/2-7,85,281+si/2+7,100,0,2);bar3d(281+ns*si-7-si/2,400,281+ns*si+7-si/2,415,0,2);arc(326,59,315,585,10);arc(337,59,315,585,10);line(317,64,324,85);line(345,64,338,85);circle(331,63,30);
for(k=0;k<60/13;k=k+2){arc(301+(ns-1)*si,115+ns*si,270,360,30+k);arc(301+(ns-1)*si,115+ns*si,270,360,30-k);}setcolor(2);setfillstyle(1,2);bar3d(281+(ns-1)*si+si/2-90,415,281+(ns-1)*si+si/2-30,y*2,0,2);setcolor(0);line(281+(ns-1)*si+si/2-92,420,281+(ns-1)*si+si/2-28,420);line(281+(ns-1)*si+si/2-64,450,281+(ns-1)*si+si/2-64,475);line(281+(ns-1)*si+si/2-56,457,281+(ns-1)*si+si/2-56,468);line(281+(ns-1)*si+si/2-85,462,281+(ns-1)*si+si/2-64,462);line(281+(ns-1)*si+si/2-56,462,281+(ns-1)*si+si/2-35,462);settextstyle(11,0,2);outtextxy(281+(ns-1)*si+si/2-87,440,"BATTERY");
in.x.ax=7;in.x.cx=137;in.x.dx=638;int86(51,&in,&out);
in.x.ax=8;in.x.cx=0;in.x.dx=478;int86(51,&in,&out);in.x.ax=1;int86(51,&in,&out);
t1=50;t2=48;
while(t1!=47)
{time();if(t2==48){t2=57;t1--;}
else t2--;
for(z=0;z<200;z++)
{mouseposi(xp,yp,click);
if((click==1)&&(xp>281)&&(xp<581)&&(yp>100)&&(yp<400))
{while(click==1){mouseposi(xp,yp,click);}
if(p1!=10){q2=(xp-281)/si;q1=(yp-100)/si;if((((q1==p1+1)||(q1==p1-1))&&(q2==p2))||(((q2==p2+1)||(q2==p2-1))&&(q1==p1)))
{te=a1[p1][p2];a1[p1][p2]=a1[q1][q2];a1[q1][q2]=te;in.x.ax=2;int86(51,&in,&out);
for(i=0;i<3;i++){for(j=0;j<3;j++)b1[j][i]=a1[j][i];}build(100,3);in.x.ax=1;int86(51,&in,&out);p1=10;}}
else {p2=(xp-281)/si;p1=(yp-100)/si;setcolor(14);rectangle(281+p2*si,100+p1*si,281+p2*si+si,100+p1*si+si);}}
if((click==1)&&(xp>35)&&(xp<187)&&(yp>310)&&(yp<350))
{while(click==1){mouseposi(xp,yp,click);}
pause(1);game();build(si,ns);setfillstyle(1,0);bar3d(281+si/2-7,85,281+si/2+7,100,0,2);arc(326,59,315,585,10);arc(337,59,315,585,10);line(317,64,324,85);line(345,64,338,85);circle(331,63,30);in.x.ax=1;int86(51,&in,&out);}
if((click==1)&&(xp>281+(ns-1)*si+si/2-90)&&(xp<281+(ns-1)*si+si/2-30)&&(yp>415)&&(yp<478))
{while(click==1){mouseposi(xp,yp,click);}
brk=1;break;}
delay(5);}
if(brk==1){brk=0;break;}}
for(i=0;i<ns;i++)
{for(j=0;j<ns;j++)b1[j+1][i+1]=a1[j][i];}
check(si,ns);
}
void lvl2()
{setcolor(1);settextstyle(3,0,4);outtextxy(60,130,"Level 2");
setcolor(0);line(381,100,381,400);line(481,100,481,400);line(281,200,581,200);line(281,300,581,300);
for(i=0;i<3;i++)
{for(j=0;j<3;j++)a2[j][i]=rs2[j][i];}
for(i=0;i<3;i++)
{for(j=0;j<3;j++)b1[j][i]=a2[j][i];}si=100;ns=3;
build(100,3);setfillstyle(1,0);bar3d(281+si/2-7,85,281+si/2+7,100,0,2);bar3d(281+ns*si-7-si/2,400,281+ns*si+7-si/2,415,0,2);for(k=0;k<60/13;k=k+2){arc(301+(ns-1)*si,115+ns*si,270,360,30+k);arc(301+(ns-1)*si,115+ns*si,270,360,30-k);}arc(326,59,315,585,10);arc(337,59,315,585,10);line(317,64,324,85);line(345,64,338,85);circle(331,63,30);
setcolor(2);setfillstyle(1,2);bar3d(281+(ns-1)*si+si/2-90,415,281+(ns-1)*si+si/2-30,y*2,0,2);setcolor(0);line(281+(ns-1)*si+si/2-92,420,281+(ns-1)*si+si/2-28,420);line(281+(ns-1)*si+si/2-64,450,281+(ns-1)*si+si/2-64,475);line(281+(ns-1)*si+si/2-56,457,281+(ns-1)*si+si/2-56,468);line(281+(ns-1)*si+si/2-85,462,281+(ns-1)*si+si/2-64,462);line(281+(ns-1)*si+si/2-56,462,281+(ns-1)*si+si/2-35,462);settextstyle(11,0,2);outtextxy(281+(ns-1)*si+si/2-87,440,"BATTERY");
in.x.ax=7;in.x.cx=137;in.x.dx=638;int86(51,&in,&out);
in.x.ax=8;in.x.cx=0;in.x.dx=478;int86(51,&in,&out);in.x.ax=1;int86(51,&in,&out);
t1=51;t2=48;
while(t1!=47)
{time();if(t2==48){t2=57;t1--;}
else t2--;
for(z=0;z<200;z++)
{mouseposi(xp,yp,click);
if((click==1)&&(xp>281)&&(xp<581)&&(yp>100)&&(yp<400))
{while(click==1){mouseposi(xp,yp,click);}
if(p1!=10){q2=(xp-281)/si;q1=(yp-100)/si;if(((((q1==p1+1)||(q1==p1-1))&&(q2==p2))||(((q2==p2+1)||(q2==p2-1))&&(q1==p1)))&&(a2[q1][q2]!='0'))
{te=a2[p1][p2];a2[p1][p2]=a2[q1][q2];a2[q1][q2]=te;in.x.ax=2;int86(51,&in,&out);
for(i=0;i<ns;i++){for(j=0;j<ns;j++)b1[j][i]=a2[j][i];}build(si,ns);in.x.ax=1;int86(51,&in,&out);p1=10;}}
else {p2=(xp-281)/si;p1=(yp-100)/si;if(a2[p1][p2]=='0'){p1=10;p2=10;}setcolor(14);in.x.ax=2;int86(51,&in,&out);rectangle(281+p2*si,100+p1*si,281+p2*si+si,100+p1*si+si);in.x.ax=1;int86(51,&in,&out);}}
if((click==1)&&(xp>35)&&(xp<187)&&(yp>310)&&(yp<350))
{while(click==1){mouseposi(xp,yp,click);}
pause(2);game();build(si,ns);setfillstyle(1,0);bar3d(281+si/2-7,85,281+si/2+7,100,0,2);arc(326,59,315,585,10);arc(337,59,315,585,10);line(317,64,324,85);line(345,64,338,85);circle(331,63,30);in.x.ax=1;int86(51,&in,&out);}
if((click==1)&&(xp>281+(ns-1)*si+si/2-90)&&(xp<281+(ns-1)*si+si/2-30)&&(yp>415)&&(yp<478))
{while(click==1){mouseposi(xp,yp,click);}
brk=1;break;}
delay(5);}
if(brk==1){brk=0;break;}}
for(i=0;i<ns;i++)
{for(j=0;j<ns;j++)b1[j+1][i+1]=a2[j][i];}
check(si,ns);}
void lvl3()
{setcolor(1);settextstyle(3,0,4);outtextxy(60,130,"Level 3");
setcolor(0);line(356,100,356,400);line(431,100,431,400);line(506,100,506,400);line(281,175,581,175);line(281,250,581,250);line(281,325,581,325);
for(i=0;i<4;i++)
{for(j=0;j<4;j++)a3[j][i]=rs3[j][i];}
for(i=0;i<4;i++)
{for(j=0;j<4;j++)b1[j][i]=a3[j][i];}si=75;ns=4;
build(75,4);setfillstyle(1,0);bar3d(281+si/2-7,85,281+si/2+7,100,0,2);bar3d(281+ns*si-7-si/2,400,281+ns*si+7-si/2,415,0,2);for(k=0;k<60/13;k=k+2){arc(288+(ns-1)*si,115+ns*si,270,360,30+k);arc(288+(ns-1)*si,115+ns*si,270,360,30-k);}arc(313,59,315,585,10);arc(324,59,315,585,10);line(304,64,311,85);line(332,64,325,85);circle(318,63,30);
setcolor(2);setfillstyle(1,2);bar3d(281+(ns-1)*si+si/2-90,415,281+(ns-1)*si+si/2-30,y*2,0,2);setcolor(0);line(281+(ns-1)*si+si/2-92,420,281+(ns-1)*si+si/2-28,420);line(281+(ns-1)*si+si/2-64,450,281+(ns-1)*si+si/2-64,475);line(281+(ns-1)*si+si/2-56,457,281+(ns-1)*si+si/2-56,468);line(281+(ns-1)*si+si/2-85,462,281+(ns-1)*si+si/2-64,462);line(281+(ns-1)*si+si/2-56,462,281+(ns-1)*si+si/2-35,462);settextstyle(11,0,2);outtextxy(281+(ns-1)*si+si/2-87,440,"BATTERY");
in.x.ax=7;in.x.cx=137;in.x.dx=630;int86(51,&in,&out);
in.x.ax=8;in.x.cx=0;in.x.dx=478;int86(51,&in,&out);in.x.ax=1;int86(51,&in,&out);
t1=50;t2=53;
while(t1!=47)
{time();if(t2==48){t2=57;t1--;}
else t2--;
for(z=0;z<200;z++)
{mouseposi(xp,yp,click);
if((click==1)&&(xp>281)&&(xp<581)&&(yp>100)&&(yp<400))
{while(click==1){mouseposi(xp,yp,click);}
if(p1!=10){q2=(xp-281)/si;q1=(yp-100)/si;if(((((q1==p1+1)||(q1==p1-1))&&(q2==p2))||(((q2==p2+1)||(q2==p2-1))&&(q1==p1)))&&(a3[q1][q2]!='0'))
{te=a3[p1][p2];a3[p1][p2]=a3[q1][q2];a3[q1][q2]=te;in.x.ax=2;int86(51,&in,&out);
for(i=0;i<ns;i++){for(j=0;j<ns;j++)b1[j][i]=a3[j][i];}build(si,ns);in.x.ax=1;int86(51,&in,&out);p1=10;}}
else {p2=(xp-281)/si;p1=(yp-100)/si;if(a3[p1][p2]=='0'){p1=10;p2=10;}setcolor(14);in.x.ax=2;int86(51,&in,&out);rectangle(281+p2*si,100+p1*si,281+p2*si+si,100+p1*si+si);in.x.ax=1;int86(51,&in,&out);}}
if((click==1)&&(xp>35)&&(xp<187)&&(yp>310)&&(yp<350))
{while(click==1){mouseposi(xp,yp,click);}
pause(3);game();build(si,ns);setfillstyle(1,0);bar3d(281+si/2-7,85,281+si/2+7,100,0,2);arc(313,59,315,585,10);arc(324,59,315,585,10);line(304,64,311,85);line(332,64,325,85);circle(318,63,30);in.x.ax=1;int86(51,&in,&out);}
if((click==1)&&(xp>281+(ns-1)*si+si/2-90)&&(xp<281+(ns-1)*si+si/2-30)&&(yp>415)&&(yp<478))
{while(click==1){mouseposi(xp,yp,click);}
brk=1;break;}
delay(5);}
if(brk==1){brk=0;break;}}
for(i=0;i<ns;i++)
{for(j=0;j<ns;j++)b1[j+1][i+1]=a3[j][i];}
check(si,ns);}
void lvl4()
{setcolor(1);settextstyle(3,0,4);outtextxy(60,130,"Level 4");
setcolor(0);line(356,100,356,400);line(431,100,431,400);line(506,100,506,400);line(281,175,581,175);line(281,250,581,250);line(281,325,581,325);
for(i=0;i<4;i++)
{for(j=0;j<4;j++)a4[j][i]=rs4[j][i];}
for(i=0;i<4;i++)
{for(j=0;j<4;j++)b1[j][i]=a4[j][i];}si=75;ns=4;
build(75,4);setfillstyle(1,0);bar3d(281+si/2-7,85,281+si/2+7,100,0,2);bar3d(281+ns*si-7-si/2,400,281+ns*si+7-si/2,415,0,2);for(k=0;k<60/13;k=k+2){arc(288+(ns-1)*si,115+ns*si,270,360,30+k);arc(288+(ns-1)*si,115+ns*si,270,360,30-k);}arc(313,59,315,585,10);arc(324,59,315,585,10);line(304,64,311,85);line(332,64,325,85);circle(318,63,30);
setcolor(2);setfillstyle(1,2);bar3d(281+(ns-1)*si+si/2-90,415,281+(ns-1)*si+si/2-30,y*2,0,2);setcolor(0);line(281+(ns-1)*si+si/2-92,420,281+(ns-1)*si+si/2-28,420);line(281+(ns-1)*si+si/2-64,450,281+(ns-1)*si+si/2-64,475);line(281+(ns-1)*si+si/2-56,457,281+(ns-1)*si+si/2-56,468);line(281+(ns-1)*si+si/2-85,462,281+(ns-1)*si+si/2-64,462);line(281+(ns-1)*si+si/2-56,462,281+(ns-1)*si+si/2-35,462);settextstyle(11,0,2);outtextxy(281+(ns-1)*si+si/2-87,440,"BATTERY");
in.x.ax=7;in.x.cx=137;in.x.dx=638;int86(51,&in,&out);
in.x.ax=8;in.x.cx=0;in.x.dx=478;int86(51,&in,&out);in.x.ax=1;int86(51,&in,&out);
t1=54;t2=48;
while(t1!=47)
{time();if(t2==48){t2=57;t1--;}
else t2--;
for(z=0;z<200;z++)
{mouseposi(xp,yp,click);
if((click==1)&&(xp>281)&&(xp<581)&&(yp>100)&&(yp<400))
{while(click==1){mouseposi(xp,yp,click);}
if(p1!=10){q2=(xp-281)/si;q1=(yp-100)/si;if(((((q1==p1+1)||(q1==p1-1))&&(q2==p2))||(((q2==p2+1)||(q2==p2-1))&&(q1==p1)))&&(a4[q1][q2]!='0'))
{te=a4[p1][p2];a4[p1][p2]=a4[q1][q2];a4[q1][q2]=te;in.x.ax=2;int86(51,&in,&out);
for(i=0;i<ns;i++){for(j=0;j<ns;j++)b1[j][i]=a4[j][i];}build(si,ns);in.x.ax=1;int86(51,&in,&out);p1=10;}}
else {p2=(xp-281)/si;p1=(yp-100)/si;if(a4[p1][p2]=='0'){p1=10;p2=10;}setcolor(14);in.x.ax=2;int86(51,&in,&out);rectangle(281+p2*si,100+p1*si,281+p2*si+si,100+p1*si+si);in.x.ax=1;int86(51,&in,&out);}}
if((click==1)&&(xp>35)&&(xp<187)&&(yp>310)&&(yp<350))
{while(click==1){mouseposi(xp,yp,click);}
pause(4);game();build(si,ns);setfillstyle(1,0);bar3d(281+si/2-7,85,281+si/2+7,100,0,2);arc(313,59,315,585,10);arc(324,59,315,585,10);line(304,64,311,85);line(332,64,325,85);circle(318,63,30);in.x.ax=1;int86(51,&in,&out);}
if((click==1)&&(xp>281+(ns-1)*si+si/2-90)&&(xp<281+(ns-1)*si+si/2-30)&&(yp>415)&&(yp<478))
{while(click==1){mouseposi(xp,yp,click);}
brk=1;break;}
delay(5);}
if(brk==1){brk=0;break;}}
for(i=0;i<ns;i++)
{for(j=0;j<ns;j++)b1[j+1][i+1]=a4[j][i];}
check(si,ns);}
void lvl5()
{setcolor(1);settextstyle(3,0,4);outtextxy(60,130,"Level 5");
setcolor(0);line(341,100,341,400);line(401,100,401,400);line(461,100,461,400);line(521,100,521,400);line(281,160,581,160);line(281,220,581,220);line(281,280,581,280);line(281,340,581,340);
for(i=0;i<5;i++)
{for(j=0;j<5;j++)a5[j][i]=rs5[j][i];}
for(i=0;i<5;i++)
{for(j=0;j<5;j++)b1[j][i]=a5[j][i];}si=60;ns=5;
build(60,5);setfillstyle(1,0);bar3d(281+si/2-7,85,281+si/2+7,100,0,2);bar3d(281+ns*si-7-si/2,400,281+ns*si+7-si/2,415,0,2);for(k=0;k<60/13;k=k+2){arc(281+(ns-1)*si,115+ns*si,270,360,30+k);arc(281+(ns-1)*si,115+ns*si,270,360,30-k);}arc(306,59,315,585,10);arc(317,59,315,585,10);line(297,64,304,85);line(325,64,318,85);circle(311,63,30);
setcolor(2);setfillstyle(1,2);bar3d(281+(ns-1)*si+si/2-90,415,281+(ns-1)*si+si/2-30,y*2,0,2);setcolor(0);line(281+(ns-1)*si+si/2-92,420,281+(ns-1)*si+si/2-28,420);line(281+(ns-1)*si+si/2-64,450,281+(ns-1)*si+si/2-64,475);line(281+(ns-1)*si+si/2-56,457,281+(ns-1)*si+si/2-56,468);line(281+(ns-1)*si+si/2-85,462,281+(ns-1)*si+si/2-64,462);line(281+(ns-1)*si+si/2-56,462,281+(ns-1)*si+si/2-35,462);settextstyle(11,0,2);outtextxy(281+(ns-1)*si+si/2-87,440,"BATTERY");
in.x.ax=7;in.x.cx=137;in.x.dx=638;int86(51,&in,&out);
in.x.ax=8;in.x.cx=0;in.x.dx=478;int86(51,&in,&out);in.x.ax=1;int86(51,&in,&out);
t1=54;t2=48;
while(t1!=47)
{time();if(t2==48){t2=57;t1--;}
else t2--;
for(z=0;z<200;z++)
{mouseposi(xp,yp,click);
if((click==1)&&(xp>281)&&(xp<581)&&(yp>100)&&(yp<400))
{while(click==1){mouseposi(xp,yp,click);}
if(p1!=10){q2=(xp-281)/si;q1=(yp-100)/si;if(((((q1==p1+1)||(q1==p1-1))&&(q2==p2))||(((q2==p2+1)||(q2==p2-1))&&(q1==p1)))&&(a5[q1][q2]!='0'))
{te=a5[p1][p2];a5[p1][p2]=a5[q1][q2];a5[q1][q2]=te;in.x.ax=2;int86(51,&in,&out);
for(i=0;i<ns;i++){for(j=0;j<ns;j++)b1[j][i]=a5[j][i];}build(si,ns);in.x.ax=1;int86(51,&in,&out);p1=10;}}
else {p2=(xp-281)/si;p1=(yp-100)/si;if(a5[p1][p2]=='0'){p1=10;p2=10;}setcolor(14);in.x.ax=2;int86(51,&in,&out);rectangle(281+p2*si,100+p1*si,281+p2*si+si,100+p1*si+si);in.x.ax=1;int86(51,&in,&out);}}
if((click==1)&&(xp>35)&&(xp<187)&&(yp>310)&&(yp<350))
{while(click==1){mouseposi(xp,yp,click);}
pause(5);game();build(si,ns);setfillstyle(1,0);bar3d(281+si/2-7,85,281+si/2+7,100,0,2);arc(306,59,315,585,10);arc(317,59,315,585,10);line(297,64,304,85);line(325,64,318,85);circle(311,63,30);in.x.ax=1;int86(51,&in,&out);}
if((click==1)&&(xp>281+(ns-1)*si+si/2-90)&&(xp<281+(ns-1)*si+si/2-30)&&(yp>415)&&(yp<478))
{while(click==1){mouseposi(xp,yp,click);}
brk=1;break;}
delay(5);}
if(brk==1){brk=0;break;}
}
for(i=0;i<ns;i++)
{for(j=0;j<ns;j++)b1[j+1][i+1]=a5[j][i];}
check(si,ns);}
void lvl6()
{setcolor(1);settextstyle(3,0,4);outtextxy(60,130,"Level 6");
setcolor(0);line(341,100,341,400);line(401,100,401,400);line(461,100,461,400);line(521,100,521,400);line(281,160,581,160);line(281,220,581,220);line(281,280,581,280);line(281,340,581,340);
for(i=0;i<5;i++)
{for(j=0;j<5;j++)a6[j][i]=rs6[j][i];}
for(i=0;i<5;i++)
{for(j=0;j<5;j++)b1[j][i]=a6[j][i];}si=60;ns=5;
build(60,5);setfillstyle(1,0);bar3d(281+si/2-7,85,281+si/2+7,100,0,2);bar3d(281+ns*si-7-si/2,400,281+ns*si+7-si/2,415,0,2);for(k=0;k<60/13;k=k+2){arc(281+(ns-1)*si,115+ns*si,270,360,30+k);arc(281+(ns-1)*si,115+ns*si,270,360,30-k);}arc(306,59,315,585,10);arc(317,59,315,585,10);line(297,64,304,85);line(325,64,318,85);circle(311,63,30);
setcolor(2);setfillstyle(1,2);bar3d(281+(ns-1)*si+si/2-90,415,281+(ns-1)*si+si/2-30,y*2,0,2);setcolor(0);line(281+(ns-1)*si+si/2-92,420,281+(ns-1)*si+si/2-28,420);line(281+(ns-1)*si+si/2-64,450,281+(ns-1)*si+si/2-64,475);line(281+(ns-1)*si+si/2-56,457,281+(ns-1)*si+si/2-56,468);line(281+(ns-1)*si+si/2-85,462,281+(ns-1)*si+si/2-64,462);line(281+(ns-1)*si+si/2-56,462,281+(ns-1)*si+si/2-35,462);settextstyle(11,0,2);outtextxy(281+(ns-1)*si+si/2-87,440,"BATTERY");
in.x.ax=7;in.x.cx=137;in.x.dx=638;int86(51,&in,&out);
in.x.ax=8;in.x.cx=0;in.x.dx=478;int86(51,&in,&out);in.x.ax=1;int86(51,&in,&out);
t1=54;t2=48;
while(t1!=47)
{time();if(t2==48){t2=57;t1--;}
else t2--;
for(z=0;z<200;z++)
{mouseposi(xp,yp,click);
if((click==1)&&(xp>281)&&(xp<581)&&(yp>100)&&(yp<400))
{while(click==1){mouseposi(xp,yp,click);}
if(p1!=10){q2=(xp-281)/si;q1=(yp-100)/si;if(((((q1==p1+1)||(q1==p1-1))&&(q2==p2))||(((q2==p2+1)||(q2==p2-1))&&(q1==p1)))&&(a6[q1][q2]!='0'))
{te=a6[p1][p2];a6[p1][p2]=a6[q1][q2];a6[q1][q2]=te;in.x.ax=2;int86(51,&in,&out);
for(i=0;i<ns;i++){for(j=0;j<ns;j++)b1[j][i]=a6[j][i];}build(si,ns);in.x.ax=1;int86(51,&in,&out);p1=10;}}
else {p2=(xp-281)/si;p1=(yp-100)/si;if(a6[p1][p2]=='0'){p1=10;p2=10;}setcolor(14);in.x.ax=2;int86(51,&in,&out);rectangle(281+p2*si,100+p1*si,281+p2*si+si,100+p1*si+si);in.x.ax=1;int86(51,&in,&out);}}
if((click==1)&&(xp>35)&&(xp<187)&&(yp>310)&&(yp<350))
{while(click==1){mouseposi(xp,yp,click);}
pause(6);game();build(si,ns);setfillstyle(1,0);bar3d(281+si/2-7,85,281+si/2+7,100,0,2);arc(306,59,315,585,10);arc(317,59,315,585,10);line(297,64,304,85);line(325,64,318,85);circle(311,63,30);in.x.ax=1;int86(51,&in,&out);}
if((click==1)&&(xp>281+(ns-1)*si+si/2-90)&&(xp<281+(ns-1)*si+si/2-30)&&(yp>415)&&(yp<478))
{while(click==1){mouseposi(xp,yp,click);}
brk=1;break;}
delay(5);}
if(brk==1){brk=0;break;}}
for(i=0;i<ns;i++)
{for(j=0;j<ns;j++)b1[j+1][i+1]=a6[j][i];}
check(si,ns);}
void pause(int w)
{setcolor(6);
setfillstyle(1,14);bar3d(230,70,412,405,0,2);
setcolor(1);settextstyle(1,0,5);
outtextxy(x-73,y-155,"PAUSED");setcolor(2);line(245,130,395,130);
setcolor(8);setfillstyle(1,12);bar3d(250,150,388,190,5,2);bar3d(250,215,388,255,5,2);bar3d(250,280,388,320,5,2);bar3d(250,345,388,385,5,2);
settextstyle(10,0,3);setcolor(9);setfillstyle(1,9);
outtextxy(255,140,"Resume");floodfill(262,171,9);floodfill(329,182,9);floodfill(376,183,9);floodfill(291,173,9);floodfill(305,165,9);floodfill(341,167,9);outtextxy(257,205,"Restart");floodfill(270,234,9);floodfill(283,246,9);floodfill(307,229,9);floodfill(324,231,9);floodfill(345,231,9);floodfill(356,232,9);floodfill(374,231,9);
outtextxy(278,270,"Menu");floodfill(297,291,9);floodfill(308,304,9);floodfill(329,297,9);floodfill(358,312,9);outtextxy(285,335,"Exit");floodfill(287,354,9);floodfill(317,367,9);floodfill(333,362,9);floodfill(333,353,9);floodfill(345,360,9);
while(1)
{mouseposi(xp,yp,click);
if((click==1)&&(xp>250)&&(xp<388)&&(yp<190)&&(yp>150))
{while(click==1){mouseposi(xp,yp,click);}
setcolor(15);setfillstyle(1,15);bar3d(230,70,412,405,0,2);in.x.ax=2;int86(51,&in,&out);break;}
if((click==1)&&(xp>250)&&(xp<388)&&(yp<255)&&(yp>215))
{while(click==1){mouseposi(xp,yp,click);}
in.x.ax=2;int86(51,&in,&out);setcolor(15);setfillstyle(1,15);bar3d(230,0,638,478,0,2);game();if(w==1)lvl1();if(w==2)lvl2();if(w==3)lvl3();if(w==4)lvl4();if(w==5)lvl5();if(w==6)lvl6();}
if((click==1)&&(xp>250)&&(xp<388)&&(yp<320)&&(yp>280))
{while(click==1)
{mouseposi(xp,yp,click);j=0;}in.x.ax=2;int86(51,&in,&out);mnscr();}
if((click==1)&&(xp>250)&&(xp<388)&&(yp<385)&&(yp>345))
{while(click==1)
{mouseposi(xp,yp,click);j=0;}exit(1);}
}}
void lvl()
{setcolor(15);setfillstyle(1,15);bar3d(343,0,638,478,5,2);floodfill(350,44,1);
setcolor(8);setfillstyle(1,12);
bar3d(383,91,459,166,5,2);bar3d(509,91,585,166,5,2);
bar3d(383,196,459,271,5,2);bar3d(509,196,585,271,5,2);
bar3d(383,301,459,376,5,2);bar3d(509,301,585,376,5,2);bar3d(378,410,590,456,5,2);
setcolor(9);settextstyle(10,0,5);
outtextxy(403,76,"1");
outtextxy(529,76,"2");
outtextxy(403,181,"3");
outtextxy(529,181,"4");
outtextxy(403,286,"5");
outtextxy(529,286,"6");
setfillstyle(1,9);floodfill(413,118,9);floodfill(542,137,9);floodfill(424,231,9);floodfill(550,245,9);floodfill(424,318,9);floodfill(535,339,9);
settextstyle(10,0,4);outtextxy(430,393,"Back");
floodfill(523,436,9);floodfill(433,433,9);floodfill(501,426,9);floodfill(479,437,9);
in.x.ax=7;in.x.cx=343;in.x.dx=638;int86(51,&in,&out);
in.x.ax=8;in.x.cx=0;in.x.dx=478;int86(51,&in,&out);
in.x.ax=1;int86(51,&in,&out);
for(i=0;i<i+1;i++)
{setcolor(15);line(223,407,a[i%2],b[i%2]);setcolor(8);line(223,407,a[(i+1)%2],b[(i+1)%2]);
setfillstyle(1,c[i%2]);floodfill(183,246,8);floodfill(181,205,8);
setcolor(d[i%2]);line(221,214,231,211);line(199,190,203,180);line(167,190,163,180);line(145,214,135,211);
for(j=0;j<180;j++)
{mouseposi(xp,yp,click);
if((click==1)&&(xp>378)&&(xp<590)&&(yp<456)&&(yp>410))
{while(click==1)
{mouseposi(xp,yp,click);}
in.x.ax=2;int86(51,&in,&out);
mnscr();}
if((click==1)&&(xp>383)&&(xp<459)&&(yp>91)&&(yp<166))
{while(click==1)
{mouseposi(xp,yp,click);}
in.x.ax=2;int86(51,&in,&out);
cleardevice();loading();cleardevice();game();lvl1();}
if((click==1)&&(xp>509)&&(xp<585)&&(yp<166)&&(yp>91))
{while(click==1)
{mouseposi(xp,yp,click);}
in.x.ax=2;int86(51,&in,&out);
cleardevice();loading();cleardevice();game();lvl2();}
if((click==1)&&(xp>383)&&(xp<459)&&(yp<271)&&(yp>196))
{while(click==1){mouseposi(xp,yp,click);}
in.x.ax=2;int86(51,&in,&out);
cleardevice();loading();cleardevice();game();lvl3();}
if((click==1)&&(xp>509)&&(xp<585)&&(yp<271)&&(yp>196))
{while(click==1)
{mouseposi(xp,yp,click);}
in.x.ax=2;int86(51,&in,&out);
cleardevice();loading();cleardevice();game();lvl4();}
if((click==1)&&(xp>383)&&(xp<459)&&(yp<376)&&(yp>301))
{while(click==1)
{mouseposi(xp,yp,click);}
in.x.ax=2;int86(51,&in,&out);
cleardevice();loading();cleardevice();game();lvl5();}
if((click==1)&&(xp>509)&&(xp<585)&&(yp<376)&&(yp>301))
{while(click==1)
{mouseposi(xp,yp,click);}
in.x.ax=2;int86(51,&in,&out);
cleardevice();loading();cleardevice();game();lvl6();}
delay(5);}}
}

void hlp()
{in.x.ax=2;
int hr[10][2]={0,1,1,1,1,1,2,1,2,1,2,2,1,0,1,1,1,1,1,2};
setcolor(1);settextstyle(3,0,4);outtextxy(60,130,"Level 1");
setcolor(0);line(381,100,381,400);line(481,100,481,400);line(281,200,581,200);line(281,300,581,300);
for(i=0;i<3;i++)
{for(j=0;j<3;j++)a1[j][i]=rs1[j][i];}
for(i=0;i<3;i++)
{for(j=0;j<3;j++)b1[j][i]=a1[j][i];}si=100;ns=3;
build(100,3);setfillstyle(1,0);bar3d(281+si/2-7,85,281+si/2+7,100,0,2);bar3d(281+ns*si-7-si/2,400,281+ns*si+7-si/2,415,0,2);arc(326,59,315,585,10);arc(337,59,315,585,10);line(317,64,324,85);line(345,64,338,85);circle(331,63,30);
for(k=0;k<60/13;k=k+2){arc(301+(ns-1)*si,115+ns*si,270,360,30+k);arc(301+(ns-1)*si,115+ns*si,270,360,30-k);}setcolor(2);setfillstyle(1,2);bar3d(281+(ns-1)*si+si/2-90,415,281+(ns-1)*si+si/2-30,y*2,0,2);setcolor(0);line(281+(ns-1)*si+si/2-92,420,281+(ns-1)*si+si/2-28,420);line(281+(ns-1)*si+si/2-64,450,281+(ns-1)*si+si/2-64,475);line(281+(ns-1)*si+si/2-56,457,281+(ns-1)*si+si/2-56,468);line(281+(ns-1)*si+si/2-85,462,281+(ns-1)*si+si/2-64,462);line(281+(ns-1)*si+si/2-56,462,281+(ns-1)*si+si/2-35,462);settextstyle(11,0,2);outtextxy(281+(ns-1)*si+si/2-87,440,"BATTERY");
in.x.ax=7;in.x.cx=137;in.x.dx=638;int86(51,&in,&out);
in.x.ax=8;in.x.cx=0;in.x.dx=478;int86(51,&in,&out);in.x.ax=1;int86(51,&in,&out);
t1=50;t2=48;
while(t1!=47)
{time();if(t2==48){t2=57;t1--;}
else t2--;
for(z=0;z<200;z++)
{if(t1==48){brk=1;break;}
if((p1!=10)&&(z==50)&&(t1!=50)){q2=hr[9-(t2-48)][1];q1=hr[9-(t2-48)][0];if((((q1==p1+1)||(q1==p1-1))&&(q2==p2))||(((q2==p2+1)||(q2==p2-1))&&(q1==p1)))
{te=a1[p1][p2];a1[p1][p2]=a1[q1][q2];a1[q1][q2]=te;in.x.ax=2;int86(51,&in,&out);
for(i=0;i<3;i++){for(j=0;j<3;j++)b1[j][i]=a1[j][i];}build(100,3);in.x.ax=1;int86(51,&in,&out);p1=10;}}
else if((z==50)&&(t2!=48)){p2=hr[9-(t2-48)][1];p1=hr[9-(t2-48)][0];setcolor(14);rectangle(281+p2*si,100+p1*si,281+p2*si+si,100+p1*si+si);}
if((click==1)&&(xp>35)&&(xp<187)&&(yp>310)&&(yp<350))
{while(click==1){mouseposi(xp,yp,click);}
pause(1);game();build(si,ns);setfillstyle(1,0);bar3d(281+si/2-7,85,281+si/2+7,100,0,2);arc(326,59,315,585,10);arc(337,59,315,585,10);line(317,64,324,85);line(345,64,338,85);circle(331,63,30);in.x.ax=1;int86(51,&in,&out);}
if((click==1)&&(xp>281+(ns-1)*si+si/2-90)&&(xp<281+(ns-1)*si+si/2-30)&&(yp>415)&&(yp<478))
{while(click==1){mouseposi(xp,yp,click);}
brk=1;break;}
delay(5);}
if(brk==1){brk=0;break;}}
for(i=0;i<ns;i++)
{for(j=0;j<ns;j++)b1[j+1][i+1]=a1[j][i];}
check(si,ns);
}
void mnscr()
{//setbkcolor(15);
cleardevice();
setcolor(15);rectangle(0,0,638,478);setfillstyle(1,15);floodfill(4,4,15);
setcolor(4);
settextstyle(7,0,10);
outtextxy(x-(110+120),y-(100+130),"CTC");
setfillstyle(1,4);
floodfill(94,87,4);floodfill(189,97,4);floodfill(249,88,4);
floodfill(184,127,4);floodfill(153,59,4);floodfill(309,59,4);
setfillstyle(1,14);
floodfill(251,104,4);floodfill(95,103,4);floodfill(204,62,4);
setcolor(9);setlinestyle(0,1,3);line(77,137,321,137);
setcolor(1);line(77,141,321,141);
setcolor(8);setfillstyle(1,12);
bar3d(373,111,585,151,5,2);bar3d(373,186,585,226,5,2);bar3d(373,261,585,301,5,2);bar3d(373,336,585,376,5,2);
setcolor(9);settextstyle(10,0,3);
outtextxy(388,100,"New Game");
setfillstyle(1,9);
floodfill(402,137,9);floodfill(414,134,9);floodfill(445,128,9);floodfill(494,139,9);floodfill(513,124,9);floodfill(555,134,9);floodfill(526,126,9);
outtextxy(425,175,"Levels");
floodfill(431,218,9);floodfill(511,211,9);floodfill(475,215,9);floodfill(448,205,9);floodfill(503,209,9);floodfill(527,200,9);
outtextxy(444,250,"Help");
floodfill(451,278,9);floodfill(489,279,9);floodfill(500,277,9);floodfill(479,283,9);
outtextxy(444,325,"Exit");
floodfill(475,360,9);floodfill(447,356,9);floodfill(504,350,9);floodfill(492,342,9);floodfill(492,355,9);
setcolor(8);rectangle(48,y,x,407);
setcolor(15);line(223,407,267,407);line(78,407,91,407);line(173,y,193,y);
setcolor(8);line(79,397,79,417);line(90,383,90,431);line(223,407,261,385);circle(267,407,2);circle(222,407,2);
arc(178,y-17,315,585,10);arc(189,y-17,315,585,10);line(169,227,173,y);line(197,227,193,y);circle(183,226,30);
in.x.ax=7;in.x.cx=343;in.x.dx=638;int86(51,&in,&out);
in.x.ax=8;in.x.cx=0;in.x.dx=478;int86(51,&in,&out);
in.x.ax=1;int86(51,&in,&out);
for(i=0;i<i+1;i++)
{setcolor(15);line(223,407,a[i%2],b[i%2]);setcolor(8);line(223,407,a[(i+1)%2],b[(i+1)%2]);
setfillstyle(1,c[i%2]);floodfill(183,246,8);floodfill(181,205,8);
setcolor(d[i%2]);line(221,214,231,211);line(199,190,203,180);line(167,190,163,180);line(145,214,135,211);
for(j=0;j<180;j++)
{mouseposi(xp,yp,click);
if((click==1)&&(xp>373)&&(xp<585)&&(yp<376)&&(yp>336))
{while(click==1)
{mouseposi(xp,yp,click);j=0;}
in.x.ax=2;int86(51,&in,&out);
cexit();}
if((click==1)&&(xp>373)&&(xp<585)&&(yp<301)&&(yp>261))
{while(click==1)
{mouseposi(xp,yp,click);j=0;}
in.x.ax=2;int86(51,&in,&out);
loading();cleardevice();
game();hlp();}
if((click==1)&&(xp>373)&&(xp<585)&&(yp>111)&&(yp<151))
{while(click==1)
{mouseposi(xp,yp,click);j=0;}
in.x.ax=2;int86(51,&in,&out);
loading();cleardevice();
game();lvl1();}
if((click==1)&&(xp>373)&&(xp<585)&&(yp<226)&&(yp>186))
{while(click==1)
{mouseposi(xp,yp,click);j=0;}
in.x.ax=2;int86(51,&in,&out);
lvl();}
delay(5);}
}
}
void main()
{
int gdriver = DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
	x=getmaxx()/2;
	y=getmaxy()/2;
//in.x.ax=1;int86(51,&in,&out);
loading();cleardevice();delay(200);
mnscr();
//game();lvl2();
//pause(1);
//lost();
//won();
in.x.ax=3;
while(!kbhit())
{int86(51,&in,&out);
click=out.x.bx;
xp=out.x.cx;
yp=out.x.dx;
if(click==1)
{while(click==1){mouseposi(xp,yp,click);}
cout<<xp<<' '<<yp;}
}
getch();
}
/*______________________________***THANK YOU***_____________________________*/