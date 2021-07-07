/**
 * @brief 
 * 
 */
/*function for cursor movement*/
void curser(int no)
{
    int cnt=1;
    char ch='0';
    gotoxy(30,23);
    while(1)
    {
    switch(ch)
    {
        case 80:
            cnt++;
            if (cnt == no + 1)
            {
                cnt = 1;
                break;
            }
        case 72:
            cnt--;
            if(cnt==0)
            {
                cnt=no;
                break;
            }
    }
    highlight(no,cnt);
    ch=getch();
    if(ch=='\r')
    {
        if(no==7)
        {
            if (cnt==1) bill() ;
            else if(cnt==2) add();
            else if(cnt==3) edit();
            else if (cnt==4) d_all();
            else if (cnt==5) d_search();
            else if (cnt==6) del();
            else   exit(0);
        }
        if(no==4)
        {
            if (cnt==1) d_code();
            else if (cnt==2)d_rate();
            else if (cnt==3) d_quan();
            else mainmenu();
        }
    }    
 }
}