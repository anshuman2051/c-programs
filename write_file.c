# include<stdio.h>
# include<stdlib.h>
int main(){
    FILE *file = fopen("dictionary_xyz5.txt","w"); 
    if( file == NULL){ printf("can`t open file"); exit(1); }
    char output_text[] = {'x', 'y', 'z'}; 
    for( int i = 0; i< 3; i++){ 
        for( int j = 0; j< 3; j++){ 
            for( int k = 0; k< 3; k++){ 
                for( int l = 0; l< 3; l++){ 
                    for( int m = 0; m< 3; m++){
                        fprintf( file ,"%c%c%c%c%c\n",output_text[i],
                         output_text[j], output_text[k], output_text[l], output_text[m]);

                     } } } }
        
    }
    //fputs("this one for testing \n fputs",file);
    fclose(file);
    printf("job done sir");
}
