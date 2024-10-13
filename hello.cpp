//#include <stdio.h>
//#include <stdlib.h>
//
//// C?u trúc c?a m?t nút trong danh sách liên k?t don
//struct Node {
//    int data;
//    struct Node* next;
//};
//
//// Hàm thêm ph?n t? vào d?u danh sách liên k?t
//void insertAtBeginning(struct Node** head, int newData) {
//    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//    newNode->data = newData;
//    newNode->next = *head;
//    *head = newNode;
//}
//
//// Hàm in danh sách liên k?t
//void printList(struct Node* node) {
//    if (node == NULL) {
//        printf("Danh sach rong.\n");
//        return;
//    }
//    printf("Danh sach: ");
//    while (node != NULL) {
//        printf("%d -> ", node->data);
//        node = node->next;
//    }
//    printf("NULL\n");
//}
//
//// Hàm tìm ki?m ph?n t? trong danh sách
//void search(struct Node* head, int key) {
//    struct Node* current = head;
//    while (current != NULL) {
//        if (current->data == key) {
//            printf("Tim thay gia tri %d trong danh sach.\n", key);
//            return;
//        }
//        current = current->next;
//    }
//    printf("Khong tim thay gia tri %d trong danh sach.\n", key);
//}
//
//// Hàm xóa ph?n t? trong danh sách
//void deleteNode(struct Node** head, int key) {
//    struct Node* temp = *head, *prev = NULL;
//
//    // N?u ph?n t? c?n xóa là d?u danh sách
//    if (temp != NULL && temp->data == key) {
//        *head = temp->next;
//        free(temp);
//        printf("Da xoa phan tu %d.\n", key);
//        return;
//    }
//
//    // Tìm ph?n t? c?n xóa
//    while (temp != NULL && temp->data != key) {
//        prev = temp;
//        temp = temp->next;
//    }
//
//    // N?u không tìm th?y ph?n t?
//    if (temp == NULL) {
//        printf("Khong tim thay phan tu %d de xoa.\n", key);
//        return;
//    }
//
//    // Xóa ph?n t?
//    prev->next = temp->next;
//    free(temp);
//    printf("Da xoa phan tu %d.\n", key);
//}
//
//// Menu chính
//int main() {
//    struct Node* head = NULL;
//    int choice, value;
//
//    while (1) {
//        printf("\n*** MENU DANH SACH LIEN KET ***\n");
//        printf("1. Them vao dau danh sach\n");
//        printf("2. In danh sach\n");
//        printf("3. Tim kiem gia tri\n");
//        printf("4. Xoa gia tri\n");
//        printf("0. Thoat\n");
//        printf("Nhap lua chon: ");
//        scanf("%d", &choice);
//
//        switch (choice) {
//            case 1:
//                printf("Nhap gia tri can them: ");
//                scanf("%d", &value);
//                insertAtBeginning(&head, value);
//                break;
//            case 2:
//                printList(head);
//                break;
//            case 3:
//                printf("Nhap gia tri can tim: ");
//                scanf("%d", &value);
//                search(head, value);
//                break;
//            case 4:
//                printf("Nhap gia tri can xoa: ");
//                scanf("%d", &value);
//                deleteNode(&head, value);
//                break;
//            case 0:
//                printf("Thoat chuong trinh.\n");
//                exit(0);
//            default:
//                printf("Lua chon khong hop le. Vui long chon lai.\n");
//        }
//    }
//    return 0;
//}


#include <stdio.h>
#include <stdlib.h>

// C?u trúc c?a m?t nút trong danh sách liên k?t don
struct Node {
    int data;
    struct Node* next;
};

// Hàm thêm ph?n t? vào d?u danh sách liên k?t
void insertAtBeginning(struct Node** head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}

// Hàm in danh sách liên k?t
void printList(struct Node* node) {
    if (node == NULL) {
        printf("Danh sach rong.\n");
        return;
    }
    printf("Danh sach: ");
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

// Hàm tìm ki?m ph?n t? trong danh sách
void search(struct Node* head, int key) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == key) {
            printf("Tim thay gia tri %d trong danh sach.\n", key);
            return;
        }
        current = current->next;
    }
    printf("Khong tim thay gia tri %d trong danh sach.\n", key);
}

// Hàm xóa ph?n t? trong danh sách
void deleteNode(struct Node** head, int key) {
    struct Node* temp = *head, *prev = NULL;

    // N?u ph?n t? c?n xóa là d?u danh sách
    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        free(temp);
        printf("Da xoa phan tu %d.\n", key);
        return;
    }

    // Tìm ph?n t? c?n xóa
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // N?u không tìm th?y ph?n t?
    if (temp == NULL) {
        printf("Khong tim thay phan tu %d de xoa.\n", key);
        return;
    }

    // Xóa ph?n t?
    prev->next = temp->next;
    free(temp);
    printf("Da xoa phan tu %d.\n", key);
}

// Menu chính
int main() {
    struct Node* head = NULL;
    int choice, value;

    while (1) {
        printf("\n*** MENU DANH SACH LIEN KET ***\n");
        printf("1. Them vao dau danh sach\n");
        printf("2. In danh sach\n");
        printf("3. Tim kiem gia tri\n");
        printf("4. Xoa gia tri\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap gia tri can them: ");
                scanf("%d", &value);
                insertAtBeginning(&head, value);
                break;
            case 2:
                printList(head);
                break;
            case 3:
                printf("Nhap gia tri can tim: ");
                scanf("%d", &value);
                search(head, value);
                break;
            case 4:
                printf("Nhap gia tri can xoa: ");
                scanf("%d", &value);
                deleteNode(&head, value);
                break;
            case 0:
                printf("Thoat chuong trinh.\n");
                exit(0);
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    }
    return 0;
}
