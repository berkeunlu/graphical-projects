#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

/**
* Berke Ünlü
* 19.12.2016
*/

void pencere();                                 //Durum Barlarini ve Dugmeleri Cizen Fonksiyon
int cizim(int xcl, int ycl,char komut,int rnk); //Çizme ve Renk Ayarlama Fonksiyonları
void mouse();                                   //Fareyi Tespit Eden Fonksiyon

int main()
{
    printf("Program Calisiyor\n");
    initwindow(1350, 800,"Paint v2.1 ",100,200);
    bar(300,200,1050,750);

    pencere();//Boya paletini ve araclari cizer.
    mouse();//Mouse tiklarini tespit eder

    return 0;
}



///Fareyi Tespit Eden Fonksiyon
void mouse()
{
    int xcl,ycl,rnk=0;
    char komut;
    while(1) //Fareyi tespit eden sonsuz dongu
    {
        clearmouseclick(WM_LBUTTONDOWN);
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            clearmouseclick(WM_LBUTTONDOWN);
            xcl = mousex();//x'in pozisyonunu belirler.
            ycl = mousey();//y'in pozisyonunu belirler.
            clearmouseclick(WM_LBUTTONDOWN);
            setfillstyle(1,0);
            settextstyle(0,0,0);
            setcolor(15);
            setbkcolor(0);
            if(xcl<125 && xcl>75)
            {
                if(ycl<125 && ycl>75)
                {
                    rnk=0;
                    bar(576,75,799,125);
                    setbkcolor(rnk);
                    outtextxy(601,93,"Renk: Siyah");

                }
                else if(ycl<200 && ycl>150)
                {
                    rnk=1;
                    bar(576,75,799,125);
                    setbkcolor(rnk);
                    outtextxy(601,93,"Renk: Lacivert");

                }
                else if(ycl<275 && ycl>225)
                {
                    rnk=2;
                    bar(576,75,799,125);
                    setbkcolor(rnk);
                    outtextxy(601,93,"Renk: Koyu Yesil");
                }
                else if(ycl<350 && ycl>300)
                {
                    rnk=3;
                    bar(576,75,799,125);
                    setbkcolor(rnk);
                    outtextxy(601,93,"Renk: Petrol Yesili");
                }
                else if(ycl<425 && ycl>375)
                {
                    rnk=4;
                    bar(576,75,799,125);
                    setbkcolor(rnk);
                    outtextxy(601,93,"Renk: Kirmizi");
                }
                else if(ycl<500 && ycl>450)
                {
                    rnk=5;
                    bar(576,75,799,125);
                    setbkcolor(rnk);
                    outtextxy(601,93,"Renk: Mor");
                }
                else if(ycl<575 && ycl>525)
                {
                    rnk=6;
                    bar(576,75,799,125);
                    setbkcolor(rnk);
                    outtextxy(601,93,"Renk: Altin");
                }
                if(ycl<650 && ycl>600)
                {
                    rnk=7;
                    bar(576,75,799,125);
                    setbkcolor(rnk);
                    outtextxy(601,93,"Renk: Gumus");
                }
            }

            else if(xcl<200 && xcl>150)
            {
                if(ycl<125 && ycl>75)
                {
                    rnk=8;
                    bar(576,75,799,125);
                    setbkcolor(rnk);
                    outtextxy(601,93,"Renk: Gri");
                }
                else if(ycl<200 && ycl>150)
                {
                    rnk=9;
                    bar(576,75,799,125);
                    setbkcolor(rnk);
                    outtextxy(601,93,"Renk: Mavi");
                }
                else if(ycl<275 && ycl>225)
                {
                    rnk=10;
                    bar(576,75,799,125);
                    setbkcolor(rnk);
                    setcolor(0);
                    outtextxy(601,93,"Renk: Yesil");
                }
                else if(ycl<350 && ycl>300)
                {
                    rnk=11;
                    bar(576,75,799,125);
                    setbkcolor(rnk);
                    setcolor(0);
                    outtextxy(601,93,"Renk: Turkuaz");
                }
                else if(ycl<425 && ycl>375)
                {
                    rnk=12;
                    bar(576,75,799,125);
                    setbkcolor(rnk);
                    outtextxy(601,93,"Renk: Turuncu");
                }
                else if(ycl<500 && ycl>450)
                {
                    rnk=13;
                    bar(576,75,799,125);
                    setbkcolor(rnk);
                    outtextxy(601,93,"Renk: Pembe");
                }
                else if(ycl<575 && ycl>525)
                {
                    rnk=14;
                    bar(576,75,799,125);
                    setbkcolor(rnk);
                    setcolor(0);
                    outtextxy(601,93,"Renk: Sari");
                }

                if (ycl<650 && ycl>600)
                {
                    rnk=15;
                    bar(576,75,799,125);
                    setbkcolor(15);
                    setcolor(0);
                    outtextxy(601,93,"Renk: Beyaz");
                }
            }
            //Farklı Kaydet
            else if (xcl<425 && xcl>325 && ycl<125 && ycl>75)
            {
                writeimagefile(NULL,300,200,1049,749);

            }
            //Ac
            else if (xcl<550 && xcl>450 && ycl<125 && ycl>75)
            {
                readimagefile(NULL,300,200,1049,749);

            }
            //Cikis
            else if(xcl<1350 && xcl>1300 &&ycl<25 &&ycl>0)
            {


                bar(801,75,1024,125);
                setcolor(4);
                outtextxy(826,93,"Cikis");
                outtextxy(886,93,"5");
                delay(1000);
                outtextxy(886,93,"4");
                delay(1000);
                outtextxy(886,93,"3");
                delay(1000);
                outtextxy(886,93,"2");
                delay(1000);
                outtextxy(886,93,"1");
                delay(1000);
                exit(1);


            }
            //Yeni Sayfa
            else if(xcl<1275 && xcl>1225 &&ycl<25 &&ycl>0)
            {
                setfillstyle(1,15);
                bar(300,200,1050,750);
            }

            else if(xcl<1250 && xcl>1175 && ycl<150 && ycl>75)
            {
                komut='k';
                bar(801,75,1024,125);
                outtextxy(826,93,"Arac: Kalem");
            }
            else if(xcl<1250 && xcl>1175 && ycl<250 && ycl>175)
            {
                komut='c';
                setfillstyle(1,0);
                bar(801,75,1024,125);
                outtextxy(826,93,"Arac: Cizgi");
            }
            else if(xcl<1250 && xcl>1175 && ycl<350 && ycl>275)
            {
                komut='d';
                setfillstyle(1,0);
                bar(801,75,1024,125);
                outtextxy(826,93,"Arac: Daire");
            }
            else if(xcl<1250 && xcl>1175 && ycl<450 && ycl>375)
            {
                komut='4';
                setfillstyle(1,0);
                bar(801,75,1024,125);
                outtextxy(826,93,"Arac: Dortgen");
            }
            else if(xcl<1250 && xcl>1175 && ycl<550 && ycl>475)
            {
                komut='3';
                setfillstyle(1,0);
                bar(801,75,1024,125);
                outtextxy(826,93,"Arac: Ucgen");
            }
            else if(xcl<1250 && xcl>1175 && ycl<650 && ycl>575)
            {
                komut='s';
                setfillstyle(1,0);
                bar(801,75,1024,125);
                outtextxy(826,93,"Arac: Silgi");

            }
            else if(xcl<1050 && xcl>300 && ycl<750 && ycl>200)
            {
                cizim(xcl,ycl,komut,rnk);
            }
            else
            {
                komut='n';
            }
        }
    }
    delay(0);
};
///Durum Barlarini ve Dugmeleri Cizen Fonksiyon
void pencere()
{
    setcolor(0);
    setbkcolor(15);

    bar(1225,0,1275,25);
    outtextxy(1236,5,"Yeni");
    bar(1300,0,1350,25);
    outtextxy(1311,5,"Cikis");
    bar(300,50,1050,150);

    int durum[10]= {325,75,425,75,425,125,325,125,325,75};
    setcolor(0);
    setfillstyle(1,0);
    fillpoly(5,durum);
    durum[0]=durum[0]+125;
    durum[2]=durum[2]+125;
    durum[4]=durum[4]+125;
    durum[6]=durum[6]+125;
    durum[8]=durum[8]+125;
    fillpoly(5,durum);

    setbkcolor(0);
    setcolor(15);

    outtextxy(350,93,"Kaydet");
    outtextxy(493,93,"Ac");
    setfillstyle(1,0);
    bar(575,75,1025,125);
    setcolor(15);
    line(800,75,800,125);

    //Arac Barini ve Dugmelerini Cizer.
    int i=0;
    int araclar1[8]= {1175,75,1250,75,1250,150,1175,150};
    setfillstyle(1,15);
    setcolor(0);
    bar(1125,50,1300,750);
    fillpoly(4,araclar1);
    for(i=0; i<5; i++)
    {
        araclar1[1]=araclar1[1]+100;
        araclar1[3]=araclar1[3]+100;
        araclar1[5]=araclar1[5]+100;
        araclar1[7]=araclar1[7]+100;
        fillpoly(4,araclar1);
    }
    line(1125,675,1300,675);
    settextstyle(5,0,5);
    setfillstyle(0,1);
    setbkcolor(15);
    outtextxy(1138,690,"Araclar");

    //Kalemi çizer
    setfillstyle(1,0);
    setcolor(0);

    int kalem[8]= {1230,85,1240,85,1240,95,1230,85};
    fillpoly(4,kalem);
    kalem[0]=kalem[0]-10;
    kalem[5]=kalem[5]+10;
    kalem[6]=kalem[6]-10;
    drawpoly(4,kalem);
    line(1220,85,1180,125);
    line(1225,90,1185,130);
    line(1235,100,1195,140);
    line(1240,105,1200,145);
    line(1180,125,1200,145);

    //Silgiyi çizer
    setbkcolor(15);
    setcolor(0);

    setfillstyle(1,0);
    bar(1225,595,1240,630);
    int silgi[8]= {1225,595,1185,595,1185,629,1225,629};
    drawpoly(4,silgi);


    //Kalan araçları çizer
    line(1187,238,1237,188);
    circle(1212,312,26);
    rectangle(1185,390,1240,435);

    int triangle[8]= {1187,488,1237,538,1187,538,1187,488};
    drawpoly(4,triangle);
    setcolor(0);
    setfillstyle(1,15);
    bar(50,50,225,750);
    settextstyle(0,0,0);
    outtextxy(1192,634,"Silgi");

    //Renk Barini ve Dugmelerini Cizer.

    int renkler1[8]= {75,75,125,75,125,125,75,125};
    setfillstyle(1,0);
    fillpoly(4,renkler1);
    for(i=1; i<8; i++)
    {
        renkler1[1]=renkler1[1]+75;
        renkler1[3]=renkler1[3]+75;
        renkler1[5]=renkler1[5]+75;
        renkler1[7]=renkler1[7]+75;

        setfillstyle(1,i);
        fillpoly(4,renkler1);
    }
    int renkler2[8]= {150,75,200,75,200,125,150,125};
    setfillstyle(1,8);
    fillpoly(4,renkler2);
    for(i=9; i<16; i++)
    {
        renkler2[1]=renkler2[1]+75;
        renkler2[3]=renkler2[3]+75;
        renkler2[5]=renkler2[5]+75;
        renkler2[7]=renkler2[7]+75;
        setfillstyle(1,i);
        fillpoly(4,renkler2);
    }
    setcolor(0);
    line(50,675,225,675);
    settextstyle(5,0,5);
    setfillstyle(0,1);
    setbkcolor(15);
    setcolor(0);
    outtextxy(60,690,"Renkler");
};
///Çizme ve Renk Ayarlama Fonksiyonları
int cizim(int xcl, int ycl,char komut,int rnk)
{
    //Kalem Araci
    setcolor(rnk);
    if(komut=='k')
    {
        clearmouseclick(WM_LBUTTONUP);
        while(!ismouseclick(WM_LBUTTONUP))
        {
            if(xcl<1049 && xcl>301 && ycl<749 && ycl>201)
            {
                setfillstyle(1,rnk);
                bar(xcl-2,ycl-2,xcl+2,ycl+2);
                xcl= mousex() , ycl= mousey();
            }
            else
            {
                break;
            }
        }
    }
    //Cizgi Araci
    else if(komut=='c')
    {
        int xcl2,ycl2;
        bar(801,75,1024,125);
        setcolor(15);
        outtextxy(826,93,"2. Noktayi Belirle");
        clearmouseclick(WM_LBUTTONUP);
        clearmouseclick(WM_LBUTTONDOWN);
        xcl= mousex();
        ycl= mousey();
        clearmouseclick(WM_LBUTTONUP);
        clearmouseclick(WM_LBUTTONDOWN);
        while(1)
        {
            if (ismouseclick(WM_LBUTTONDOWN))
            {
                xcl2= mousex();
                ycl2= mousey();
                break;
            }
        }
        if(xcl2<1050 && xcl2>300 && ycl2<750 && ycl2>200)
        {
            setcolor(rnk);
            line(xcl,ycl,xcl2,ycl2);
        }
        else
        {
            bar(801,75,1024,125);
            setcolor(4);
            outtextxy(826,93,"HATA !!!");
            printf("Alan disina cikildi\n");
            delay(2000);
        }
        setcolor(15);
        bar(801,75,1024,125);
        outtextxy(826,93,"Arac: Cizgi");
    }
    //Daire Araci
    else if(komut=='d')
    {
        int r;
        int xcl2,ycl2;
        bar(801,75,1024,125);
        setcolor(15);
        outtextxy(826,93,"Yari Capi Belirle");
        circle(xcl,ycl,r);
        clearmouseclick(WM_LBUTTONUP);
        clearmouseclick(WM_LBUTTONDOWN);
        xcl= mousex();
        ycl= mousey();
        clearmouseclick(WM_LBUTTONUP);
        clearmouseclick(WM_LBUTTONDOWN);

        while(1)
        {
            if (ismouseclick(WM_LBUTTONDOWN))
            {
                xcl2= mousex();
                ycl2= mousey();
                break;
            }
        }
        r=sqrt(pow((abs(xcl-xcl2)),2)+pow((abs(ycl-ycl2)),2));
        if(xcl+r<1050 && xcl-r>300 && ycl+r<750 && ycl-r>200 && xcl<1050 && xcl>300 && ycl<750 && ycl>200 )
        {
            setcolor(rnk);
            circle(xcl,ycl,r);
        }
        else
        {
            bar(801,75,1024,125);
            setcolor(4);
            outtextxy(826,93,"HATA !!!");
            printf("Alan disina cikildi\n");
            delay(2000);
        }
        bar(801,75,1024,125);
        setcolor(15);
        outtextxy(826,93,"Arac: Daire");


    }
    //Dortgen Araci
    else if(komut=='4')
    {
        int xcl2,ycl2;
        bar(801,75,1024,125);
        setcolor(15);
        outtextxy(826,93,"Koseyi Belirle");
        clearmouseclick(WM_LBUTTONUP);
        clearmouseclick(WM_LBUTTONDOWN);
        xcl= mousex();
        ycl= mousey();
        clearmouseclick(WM_LBUTTONUP);
        clearmouseclick(WM_LBUTTONDOWN);
        while(1)
        {

            if (ismouseclick(WM_LBUTTONDOWN))
            {
                xcl2= mousex();
                ycl2= mousey();
                break;
            }

        }
        if(xcl2<1050 && xcl2>300 && ycl2<750 && ycl2>200)
        {
            setcolor(rnk);
            rectangle(xcl,ycl,xcl2,ycl2);
        }
        else
        {
            bar(801,75,1024,125);
            setcolor(4);
            outtextxy(826,93,"HATA !!!");
            printf("Alan disina cikildi\n");
            delay(2000);
        }
        bar(801,75,1024,125);
        setcolor(15);
        outtextxy(826,93,"Arac: Dikdortgen");

    }
    //Ucgen Araci
    else if(komut=='3')
    {
        int xcl2,ycl2,xcl3,ycl3;
        bar(801,75,1024,125);
        setcolor(15);
        outtextxy(826,93,"2.Koseyi Belirle");
        clearmouseclick(WM_LBUTTONUP);
        clearmouseclick(WM_LBUTTONDOWN);
        xcl= mousex();
        ycl= mousey();
        clearmouseclick(WM_LBUTTONUP);
        clearmouseclick(WM_LBUTTONDOWN);
        while(1)
        {
            if (ismouseclick(WM_LBUTTONDOWN))
            {
                xcl2= mousex();
                ycl2= mousey();
                break;
            }
        }
        outtextxy(826,93,"3.Koseyi Belirle");
        clearmouseclick(WM_LBUTTONUP);
        clearmouseclick(WM_LBUTTONDOWN);
        while(1)
        {
            if (ismouseclick(WM_LBUTTONDOWN))
            {
                xcl3= mousex();
                ycl3= mousey();
                break;
            }
        }
        int ucgen[8]= {xcl,ycl,xcl2,ycl2,xcl3,ycl3,xcl,ycl};
        if(xcl2<1050 && xcl2>300 && ycl2<750 && ycl2>200 && xcl3<1050 && xcl3>300 && ycl3<750 && ycl3>200)
        {
            setcolor(rnk);
            drawpoly(4,ucgen);
            bar(801,75,1024,125);
        }
        else
        {
            bar(801,75,1024,125);
            setcolor(4);
            outtextxy(826,93,"HATA !!!");
            printf("Alan disina cikildi\n");
            delay(2000);
        }
        setcolor(15);
        outtextxy(826,93,"Arac: Ucgen");

    }
    //Silgi Araci
    else if(komut=='s')
    {
        clearmouseclick(WM_LBUTTONUP);
        while(!ismouseclick(WM_LBUTTONUP))
        {
            if(xcl<1048 && xcl>302 && ycl<748 && ycl>202)
            {
                setfillstyle(1,15);
                bar(xcl-3,ycl-3,xcl+3,ycl+3);
                xcl= mousex() , ycl= mousey();
            }
            else
            {
                break;
            }
        }

    }
    else
    {
        return(1);
    }
};
