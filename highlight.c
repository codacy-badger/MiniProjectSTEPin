/**
 * @brief 
 * 
 * @param no 
 * @param count 
 */
void highlight(int no,int count)
{
 if (no==4){
  //textbackground(11);
  //textcolor(0);
  gotoxy(30,23);printf("   By Code          ");
  gotoxy(30,24);printf("   By Rate          ");
  gotoxy(30,25);printf("   By Quantity      ");
  gotoxy(30,26);printf("   Back to main menu");
  //textcolor(0);
  //textbackground(2);
  switch (count)
  {
   case 1:
    gotoxy(30,23);
    printf(" - By Code          ");
    break;
   case 2:
    gotoxy(30,24);
    printf(" - By Rate          ");
    break;
   case 3:
    gotoxy(30,25);
    printf(" - By Quantity      ");
    break;
   case 4:
    gotoxy(30,26);
    printf(" - Back to main menu");
    break;
  }
 }

 if(no==7){
  //textbackground(11);
  //textcolor(0);
  gotoxy (30,23);printf("   Calculate Bill ");
  gotoxy (30,24);printf("   Add Goods      ");
  gotoxy (30,25);printf("   Edit Goods     ");
  gotoxy (30,26);printf("   Display All    ");
  gotoxy (30,27);printf("   Search         ");
  gotoxy (30,28);printf("   Delete Goods   ");
  gotoxy (30,29);printf("   Exit           ");
  //textcolor(0);
  //textbackground(2);
  switch(count){
   case 1:
    gotoxy (30,23);
    printf(" - Calculate Bill ");
    break;
   case 2:
    gotoxy (30,24);
    printf(" - Add Goods      ");
    break;
   case 3:
    gotoxy (30,25);
    printf(" - Edit Goods     ");
    break;
   case 4:
    gotoxy (30,26);
    printf(" - Display All    ");
    break;
   case 5:
    gotoxy (30,27);
    printf(" - Search         ");
    break;
   case 6:
    gotoxy (30,28);
    printf(" - Delete Goods   ");
    break;
   case 7:
    gotoxy (30,29);
    printf(" - Exit           ");
    break;
  }
 }
}