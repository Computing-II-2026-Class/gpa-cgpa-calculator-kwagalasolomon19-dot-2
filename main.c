 /*NAME: KWAGALA SOLOMON
 STUDENT NUMBER: 25/U/BIO/026/GV*/



#include <stdio.h>
#define COURSES 16
void getGrade( int score, char grade[], float *point)
{
  if ( score >= 80){sprintf(grade , "A");*point=5.0;}
  else if(score >= 70){ sprintf(grade,"B");*point=4.0;}
  else if (score >=60){ sprintf(grade,"C");*point=3.0;}
  else if (score>=50){sprintf(grade ,"D");*point=2.0;}
  else {sprintf(grade,"F");*point=0;}
}
char* getClass(float cgpa)
{
  if(cgpa>=4.4)return "FIrst Class";
  else if (cgpa>= 3.6) return "Second Class Upper";
  else if ( cgpa >= 2.8)return "Second Class LOwer";
  else if (cgpa >= 2.00) return "Pass";
  else return "Fail";
}
int main()
{
  int scores[COURSES],sem1_un,sem2_un;
  int credits[COURSES]={4,3,3,3,3,3,2,3,
                          4,3,3,3,3,3,3,3};
  float points[COURSES],sem1_tt,sem2_tt ;
  char grades[COURSES][3],coursecode[COURSES][12]={"TEMB 1101","TEMB 1102","TEMB 1103","TEMB 1104","TEMB 1105","TEMB 1106","TEMB 1107","TEMB 1108",
                                                 "TEMB 1201","TEMB 1202","TEMB 1203","TEMB 1204","TEMB 1205","TEMB 1206","TEMB 1207","TEMB 1208"};

 printf("Enter marks for each course :\n");
 for (int i = 0;i <COURSES;i++){printf("%s :",coursecode[i]);
                            scanf("%d",& scores[i]);
                            getGrade(scores[i],grades[i],& points[i]);
                            }

  for ( int i =0;i <8;i++ ){ sem1_tt += points[i]*credits[i];
                           sem1_un += credits[i];}
  for ( int i=8;i<16; i++){ sem2_tt += points[i]*credits[i];
                             sem2_un += credits[i];}

     float gpa1 = sem1_tt/sem1_un;
     float gpa2 = sem2_tt/sem2_un;
     float cgpa = (sem1_tt+sem2_tt)/(sem1_un+ sem2_un);


      printf("\n========ACADEMIC REPORT=========\n");
      for (int i=0; i< COURSES;i++){
        printf("%s | Score:%d | Grade: %s | GP: %.2f | CU: %d | W:%.2f\n",coursecode[i],scores[i],grades[i],points[i],credits[i],points[i]*credits[i]);
        }
         printf("\nSemester I GPA:%.2f\n",gpa1);
         printf("Semester II GPA: %.2f\n",gpa2);
         printf("CGPA : %.2f\n",cgpa);
         printf("Classification:%s\n",getClass(cgpa));


}
