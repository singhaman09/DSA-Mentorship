#include<stdio.h>
int main()
{   
    int dd,mm;
    A:
    printf("enter your birth month between 1-12:\n");
    scanf("%d",&mm);
    if(!(mm>=1 && mm<=12))
    {   printf(" INVALID MONTH PLEASE REENTER YOUR MONTH!!!\n");
        goto A;
    }
    B:
    printf("enter your birth date between 1-31:\n");
    scanf("%d",&dd);
    if(!(dd>=1 && dd<=31))
    {
        printf(" INVALID DATE PLEASE REENTER YOUR DATE!!!\n");
        goto B;
    }
    if(mm==2 && dd>29)
    {   
        printf("ERROR!! Feburary has 29 days please renter your date\n");
        goto B;
    }
    if( (mm==12 && dd>=22) || (mm==1 && dd<=19) )
    {
        printf("Your Zodiac Sign based on your Birth date is capricon.\nPeople are very much receptive to your charming ideas at this point of time. You must leave no chance to make people yield to your wishes. Keep your controlling attitude in check which can work against you if left unchecked. You may receive some unexpected news from a close one so keep your mind open to it.\nJAI SHREE RAM\n");
    }
    else if((mm==1 && dd>=20) || (mm==2 && dd<=17))
    {
        printf("Your Zodiac Sign based on your Birth date is aquarius.\nYou will be fascinated by supernatural at this time. You will want to follow up on mysterious matter today and you are likely to watch a mystery film or read a mystery novel. You may also decide to discover the truth behind a mystery or try to discover more about a person or a situation. You should exercise a degree of caution in your pursuits.\nJAI SHREE RAM\n");
    }
    else if((mm==2 && dd>=18) || (mm==3 && dd<=19))
    {
        printf("Your Zodiac Sign based on your Birth date is Pisces.\nYou need to be humble to endear yourself to your friends. You may have assumed an arrogant attitude without even being aware of it. So, this is the best time to start analyzing your past activities rather than criticising others. It is a rare opportunity of introspection for you and you should take full advantage of this reflective mood to get closer to yourself.\nJAI SHREE RAM\n");
    }
    else if((mm==3 && dd>=20) || (mm==4 && dd<=19))
    {
        printf("Your Zodiac Sign based on your Birth date is Aries.\nYou may be going to host a big conference or seminar today. But slight confusions with the availability of the venue at your desired time may put you at an embarrassing position in front of every one and you may have to cancel the event! You have to keep your cool in such a situation and keep acting positively.\nJAI SHREE RAM\n");
    }
    else if((mm==4 && dd>=20) || (mm==5 && dd<=20))
    {
        printf("Your Zodiac Sign based on your Birth date is Taurus.\nYou are determined to take the blame for a friend's mistake. But do consider its consequences. There may be serious legal involvement as well. Some life changing event may also happen which will give you an unforgettable experience. Fulfill your desire to look different, change your hairstyle or wardrobe!\nJAI SHREE RAM\n");
    }
    else if((mm==5 && dd>=21) || (mm==6 && dd<=20))
    {
        printf("Your Zodiac Sign based on your Birth date is Gemini.\nIssues related to profession will get resolved. But no aggressive action, be it in words or in writing should not be taken till then. Those facing issues on personal front should make time for dear ones. Do take care of your health as you have been ignorant of it since long.\nJAI SHREE RAM\n");
    }
    else if((mm==6 && dd>=21) || (mm==7 && dd<=22))
    {
        printf("Your Zodiac Sign based on your Birth date is Cancer.\nThe day is perfect for showing your talents. You may act more aggressive or assertive than you generally do and this is going to surprise the people around you. They will be put out of balance and will probably have to revise their opinions about you. This element of surprise can provide you with a much needed edge. Be sure to utilize this to the fullest extent.\nJAI SHREE RAM\n");
    }
    else if((mm==7 && dd>=23) || (mm==8 && dd<=22))
    {
        printf("Your Zodiac Sign based on your Birth date is Leo.\nYou have set too high a standard for yourself and you will drive yourself harder and harder to achieve this. It will be difficult to reach your goal and this can lead to a sense of disappointment. You need to realize your own capabilities before you set your goals. The time is not good to take any major decision.\nJAI SHREE RAM\n");
    }
    else if((mm==8 && dd>=23) || (mm==9 && dd<=22))
    {
        printf("Your Zodiac Sign based on your Birth date is Virgo.\nThis is the perfect time to implement your creative ideas and expand your thinking. Enroll yourself in some intellectual pursuits or a vocational training which will help you to take an edge over the others. How ever you may be subjected to some financial problems while striving to pursue the same\nJAI SHREE RAM\n");
    }
    else if((mm==9 && dd>=23) || (mm==10 && dd<=22))
    {
        printf("Your Zodiac Sign based on your Birth date is Libra.\nToday, you need to realize that being a prisoner of the past is not going to help you in any way. You need to learn your lesson from the past, but then you will have to let it go. If you can realize this, you can take a giant step towards solving the major problems that you have been facing in your life.\nJAI SHREE RAM\n");
    }
    else if((mm==10 && dd>=23) || (mm==11 && dd<=21))
    {
        printf("Your Zodiac Sign based on your Birth date is Scorpio.\nBe the first one to take the initiatives and you will be the first one to receive the credits. Just be a little careful of not over exerting yourself or pressing hard on certain issues of least relevance. Do not hurt others by blurting out something which they donﾒt like! They may irritate you unintentionally and without realizing even that they are actually doing it.\nJAI SHREE RAM\n");
    }
    else if((mm==11 && dd>=22) || (mm==12 && dd<=21))
    {
        printf("Your Zodiac Sign based on your Birth date is Sagittarius.\nOld connections and experiences can play an important role in your life now. You will be under tremendous pressure to perform well in all spheres, but you need to realize that much of these pressure stem from the impossibly high standards that you have set for yourself. Honesty and integrity will take you far in your chosen field, but be ready to remain true to your own beliefs and ideals.\nJAI SHREE RAM\n");
    }
    else 
    {
        printf("INVALID DETAIL ENTERED\n");
        goto A;
    }
       
return 0;
}