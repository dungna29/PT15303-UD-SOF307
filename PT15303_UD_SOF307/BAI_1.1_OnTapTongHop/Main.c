#include <stdbool.h>
#include <stdio.h>
#include <string.h>
/*
 * A. Cấu trúc dữ liệu vào giải thuật (Data Structure & Algorithms)
 *
 * - Cấu trúc dữ liệu(Data Structure) là cách lập trình để lưu trữ dữ liệu để dữ liệu có thể được sử dụng một cách hiệu quả. Hầu hết mọi ứng dụng doanh nghiệp đều sử dụng nhiều kiểu cấu trúc dữ liệu khác nhau theo cách này hay cách khác, vì nó mang lại nhiều lợi ích rất lớn không chỉ cho việc lưu trữ dữ liệu.
 *
 * - Thuật toán(Algorithms) là một thủ tục từng bước, xác định một tập hợp các lệnh được thực hiện theo một thứ tự nhất định để có được đầu ra mong muốn. Các thuật toán thường được tạo độc lập với các ngôn ngữ cơ bản, tức là một thuật toán có thể được triển khai bằng nhiều ngôn ngữ lập trình(C/C++, Java, Python, PHP…)
 *
 * B. Tại sao phải học
 * - Khi các ứng dụng ngày càng phức tạp và nhiều dữ liệu, có ba vấn đề phổ biến mà các ứng dụng phải đối mặt ngay bây giờ.
 *		+ Tìm kiếm dữ liệu – Tìm kiếm một sản phẩm nào đó trong cả tỉ tỉ dữ liệu càng ngày càng lớn. Khi dữ liệu phát triển, tìm kiếm sẽ trở nên chậm		hơn. Vì vậy cần CTDL & GT để nâng cao hiệu suất hơn.
		+ Tốc độ bộ xử lý – Tốc độ bộ xử lý mặc dù rất cao nhưng sẽ bị giới hạn nếu dữ liệu tăng lên đến hàng tỷ dữ liệu.
		+ Nhiều yêu cầu – Vì hàng nghìn người dùng có thể tìm kiếm dữ liệu đồng thời trên một máy chủ web, ngay cả máy chủ nhanh cũng bị lỗi trong khi tìm kiếm dữ liệu.

   C. Cần ôn tập lại các kiến thức sau:
 *		+ Kiến thức về mảng trong C
 *		+ Thuật toán sắp xếp
 *		+ Thuật toán đệ quy
 *		+ Struc trong C
 *		+ Con trỏ trong C
 *
 */

void khaiBaoMangBai1()
{
	//1. Khai báo mảng
	//Cách dùng:
	// <kiểu dữ liệu> <arr + tên mảng>[] = {giá trị 1,giá trị 2...}; 
	// <kiểu dữ liệu> <arr + tên mảng>[kích thước mảng số nguyên];
	int arrNumber[] = { 8,2,7,9 };//Khai báo 1 mảng số nguyên có mấy 4 phần tử
	// <tên mảng>[index] tương ứng với 1 giá trị
	printf("\t Index 0 = %d \n", arrNumber[0]);
	//Gán giá trị cho mảng
	// <tên mảng>[index] = giá trị cần gán;
	arrNumber[0] = 9;
	// In tất cả các phần tử trong mảng ra màn hình
	// Dùng vòng lặp để in tất cả các phần tử trong mảng ra
	for (int i = 0; i < 4; i++)
	{
		printf("\t Index %d = %d \n", i, arrNumber[i]);
	}
}
void thuatToanSapXepBai2()
{
	int arrNumber[] = { 99,66,88,77,11,00 };
	//Thuật toán nổi bọt
	printf("Mang chua duoc sap xep: \n");
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", arrNumber[i]);
	}
	//Sử dụng thuật toán nổi bọt đế sắp xếp
	//Mục tiểu bài toán giúp sắp xếp các vị trí của số
	// So sánh theo cặp và tìm ra vị trí bé nhất để lên đầu
	// for (int i = 0; i < 6; i++)
	// {		
	// 	for (int j = i + 1; j < 6; j++)
	// 	{
	// 		int temp = arrNumber[i];
	// 		if (arrNumber[i] > arrNumber[j])//Đảo dấu và xem kết quả
	// 		{				
	// 			arrNumber[i] = arrNumber[j];				
	// 			arrNumber[j] = temp;
	// 		}
	// 	}
	// }

	for (int i = 0; i < 6; i++)
	{
		printf("Lan chay thu: %d \n", i);
		printf("Gia Tri Tai Vi Tri %d \n", arrNumber[i]);
		for (int j = i + 1; j < 6; j++)
		{
			int temp = arrNumber[i];
			printf("Gia Tri cua %d > %d \n", arrNumber[i], arrNumber[j]);
			if (arrNumber[i] > arrNumber[j])
			{
				arrNumber[i] = arrNumber[j];
				arrNumber[j] = temp;
			}
			for (int i = 0; i < 6; i++)
			{
				printf("%d ", arrNumber[i]);
			}
			printf("\n");
		}
		printf("Sau khi sap xep lan thu %d \n", i);
		for (int i = 0; i < 6; i++)
		{
			printf("%d ", arrNumber[i]);
		}
	}
	printf("\n");
	printf("Mang sau khi duoc sap xep: \n");
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", arrNumber[i]);
	}
}
/*
 *Đệ quy trong C - Trong lập trình, một hàm được gọi là đệ quy nếu bên trong thân hàm có một lời gọi đến chính nó.
 *Hàm đệ quy luôn có điều kiện dừng được gọi là “điểm neo”. Khi đạt tới điểm neo, hàm sẽ không gọi chính nó nữa.
 */
int tinhTongCacSoTu1DenN(int a)
{
	if (a == 0) {
		return 0;//Điều kiện dừng
	}
	return a + tinhTongCacSoTu1DenN(a - 1);
}
/*
 * Cho n là một số tự nhiên (n>=0). Hãy tính giai thừa của n (n!) biết rằng 0! = 1 và n! = (n-1)! * n.
 * Theo giả thiết, ta có : n! = (n-1)! * n. Như vậy :
	Để tính n! ta cần phải tính (n-1)!
	Để tính (n-1)! ta phải tính (n-2)!
 */


 /* struct trong lập trình C gọi là kiểu dữ liệu do người dùng tự định nghĩa
  * struct structureName
	 {
		 dataType member1;
		 dataType member2;
		 ...
	 };
  */
struct SinhVien {
	int maSV;
	char ho[10];
	char ten[20];
	bool gioiTinh;
	char queQuan[100];
};
int giaiThua(int a)
{
	if (a == 0) {
		return 1; // Điều kiện dừng
	}
	return a * giaiThua(a - 1);//Gọi đệ quy
}

/*
 * Con trỏ
 *
 */
void conTroC()
{
	int* point;//Khai báo  1 contror tên là point có kiểu dữ liệu là p


	int a;
	printf("Dia chi cua a co kieu HEX la %p", &a);//Dấu & giúp lấy địa chỉ
}
int main()
{

	printf("%d", tinhTongCacSoTu1DenN(4));




	//Sử dụng struct
	// Khai báo 2 biến sv1 và sv2 có kiểu SinhVien
	struct SinhVien sv1, sv2;
	sv1.maSV = 1;
	strcpy_s(sv1.ho, 50, "Nguyen");
	char a_static[5] = { 'q', 'w', 'e', 'r', 0 };// cần số 0 ở cuối chuỗi để kết thúc
	printf("Ma Ban vua nhap vao : %d  Ho: %s", sv1.maSV, sv1.ho);
	// for (int i = 0; i < strlen(sv1.ho); i++)
	// {
	// 	printf("%c", sv1.ho[i]);
	// }

	// Ta nên thêm từ khóa struct ở đầu,
	// để phân biệt được biến này là biến của kiểu dữ liệu tự định nghĩa
	struct SinhVien sv3, sv4;

	// Khai báo mảng
	struct SinhVien sv[100];

	/*
	 * //Ví dụ: Nhập tên vào sau đó in ra màn hình
	   printf("Moi ban nhap ten 1 vao day: ");
	   gets_s(ten1, 50);
	 */
}