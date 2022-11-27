#include <stdio.h>
    
// Khai báo Struct Student
struct student {
  int id;
  char fullname[100]; 
  float score;  
};

// Protype Function
void displayDetail(struct student *);

int main(void) {    
  // 1. Khai báo biến student structure
  struct student std[2];
  
  //2. Nhập thông tin vào Struct
  int i;
  for(i = 0; i < 2; i++)
  {                   
      printf("Enter id:");
      scanf("%d", &std[i].id);
      getc(stdin);
      printf("Full name:");     
      scanf("%[^\n]", &std[i].fullname);
      getc(stdin);
      printf("Enter score:");
      scanf("%f", &std[i].score);
      getc(stdin);                             
  }
  
  //3. Hiển thị thông tin chi tiết
  displayDetail(std);

  return 0;
}

void displayDetail(struct student *ptr) {
  int i;
  for (i = 0; i < 2; i++) {          
    printf("ID: %d\n", ptr->id);
    printf("Full Name: %s\n", ptr->fullname);   
    printf("Score: %.2f\n", ptr->score);     
    ptr++;
  }
}

/*
 Lưu ý:
 >> Khi dùng scanf("%[^\n])là mình scan đến \n. Nhưng không lấy \n. 
 Vậy là \n vẫn còn trong stdin buffer. Lần kế tiếp khi scan nữa là máy sẽ 
 nhận \n đang còn trong bufffer. Do vậy chúng ta nên dùng thêm getc(stdin) 
 để hủy bỏ bufffer đi trước khi tiếp nhận mới dữ liệu vào.
*/