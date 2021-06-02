//Arihant Baid
//StepIN assignment Question 1
//Write a function to break the given string and return the correct string between '$' and ';' with no '$' or ';' in between. 
//Inside the repository

#include<stdio.h>
#include<string.h>

 void extract_string(char * line){

     int line_size = strlen(line);
     int max_dollar = 0, min_sc = line_size-1;

     for(int i=0;i<line_size-1;i++){
         if(line[i]=='$'){
            for(int j=i+1;j<line_size-1;j++){
                  if(line[j]==';') {
                      max_dollar=i;
                      min_sc=j;
                      i=line_size; //To end the process
                      break;
                    } 
                  else if(line[j]=='$'){
                      i=j-1;
                      break;
                    }
                }
            }
        }
     printf("\n");
     for(int i=max_dollar;i<=min_sc;i++){
         printf("%c",line[i]);
     }
     
    return;    
     }
 

void getinput(){
     FILE* fp;
     fp = fopen("data.txt", "r");
     char* temp =fgets(temp,100,fp);
     while(temp!=NULL){
         extract_string(temp);
         temp =fgets(temp,100,fp);
     }
     
     fclose(fp);
}


 int main(int argc, char const *argv[])
 {
    getinput(); 
     return 0;
 }
 