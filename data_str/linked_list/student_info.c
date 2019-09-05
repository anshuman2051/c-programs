/*issues:
* 1 insertion is not in order
* 2 unable to delete first element
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node * node;
struct node{
    int r_no;
    char name[30];
    node link;
};
node start = NULL;

void insert(){
    node temp = malloc(sizeof(struct node));
    temp->link = NULL;
    printf("enter the roll no and name >");
    scanf("%d%s",&temp->r_no, temp->name);

    if(start == NULL) start = temp;
    else if(temp->r_no == start->r_no){
        puts("duplicate roll no can't enter !!");
    }
    else if(temp->r_no < start->r_no){
        node t = start;
        start = temp;
        temp->link = t;
    }
    else{
        node t = start;
        while(t->link!= NULL && t->r_no < temp->r_no){
            t = t->link;
        }
        if(t->link == NULL)t->link = temp;
        else{
            if(t->r_no == temp->r_no){
                puts("duplicate roll no can't enter !!");
                return;
            }
            else{
                node t2 = t;
                t->link = temp;
                temp->link = t2->link;
            }
        }
    }
}

void print(){
    if(start == NULL)puts("list empty");
    else{
        node temp = start;
        while(temp != NULL){
            printf("%-3d %3s\n",temp->r_no, temp->name);
            temp = temp->link;
        }
    }
}

void delete(){
    if(start == NULL){
        puts("underflow");
        return;
    }
    int r_no;
    puts("enter the roll no to delete");
    printf(">");
    scanf("%d",&r_no);

    node t = start,save;
    while(t->r_no != r_no && t!= NULL){
        save = t;
        t = t->link;
    }
    if(t == NULL)puts("roll no not present");
    else {
        save->link = t->link;
        free(t);
        puts("done deletion");
    }
}
int main(){
    puts("welcome to students` data storing program");
    int res;
    while(1){
        puts("enter 1. insert  2.delete 3.print ");
        printf(">");
        scanf("%d",&res);

        switch(res){
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                print();
                break;
            default:
                exit(1);
        }
    }

}