# C++ Programming Exercises

## Bài 1: Hello World
**Mục tiêu:** In chuỗi "Hello, World!" ra màn hình bằng `printf` hoặc `cout`.

### 📌 Output Format
Xuất kết quả ra màn hình.

### 🔹 **Ví dụ**
**Input:** _(Không có)_

**Output:**
```
Hello, World!
```
---

## Bài 2: Input và Output
**Mục tiêu:** Đọc và in ra tổng ba số nguyên nhập từ bàn phím.

### 📌 Input Format
Một dòng chứa ba số nguyên cách nhau bởi dấu cách.

### 📌 Output Format
In tổng của ba số nguyên đó.

### 🔹 **Ví dụ**
**Input:**
```
1 2 7
```
**Output:**
```
10
```

📌 *Giải thích:* `1 + 2 + 7 = 10`
---

## Bài 3: Kiểu dữ liệu cơ bản
**Mục tiêu:** Làm quen với các kiểu dữ liệu phổ biến trong C++.

### 📌 Input Format
Nhập các giá trị theo thứ tự: `int, long, char, float, double`.

### 📌 Output Format
Mỗi giá trị in ra trên một dòng. `float` làm tròn đến 3 chữ số thập phân, `double` đến 9 chữ số.

### 🔹 **Ví dụ**
**Input:**
```
3 12345678912345 a 334.23 14049.30493
```
**Output:**
```
3
12345678912345
a
334.230
14049.304930000
```
---

## Bài 4: Câu lệnh điều kiện
**Mục tiêu:** Hiển thị số từ 1-9 bằng chữ, các số lớn hơn 9 in "Greater than 9".

### 📌 Input Format
Một số nguyên `n`.

### 📌 Output Format
- Nếu `1 ≤ n ≤ 9`, in số bằng chữ.
- Nếu `n > 9`, in "Greater than 9".

### 🔹 **Ví dụ**
**Input:**
```
5
```
**Output:**
```
five
```

**Input:**
```
44
```
**Output:**
```
Greater than 9
```
---

## Bài 5: Vòng lặp `for`
**Mục tiêu:** Sử dụng vòng lặp `for` để in số hoặc kiểm tra chẵn/lẻ.

### 📌 Input Format
Hai số nguyên `a` và `b`.

### 📌 Output Format
- Nếu số nằm trong khoảng `1-9`, in bằng chữ.
- Nếu `n > 9`, in "even" nếu chẵn, "odd" nếu lẻ.

### 🔹 **Ví dụ**
**Input:**
```
8
11
```
**Output:**
```
eight
nine
even
odd
```
---

## Bài 6: Hàm
**Mục tiêu:** Viết hàm `max_of_four(a, b, c, d)` trả về số lớn nhất.

### 📌 Input Format
Bốn số nguyên, mỗi số trên một dòng.

### 📌 Output Format
In số lớn nhất trong bốn số đó.

### 🔹 **Ví dụ**
**Input:**
```
3
4
6
5
```
**Output:**
```
6
```

## Bài 7: Arrays Introduction
**Mục tiêu:** Đảo ngược thứ tự các phần tử trong mảng.

### 📌 Input Format
- Dòng đầu tiên chứa số nguyên n - kích thước của mảng.
- Dòng thứ hai chứa n số nguyên cách nhau bởi dấu cách.

### 📌 Constraints
- 1 ≤ n ≤ 1000
- 1 ≤ A[i] ≤ 10000, với A[i] là phần tử thứ i trong mảng

### 📌 Output Format
In ra n số nguyên theo thứ tự ngược lại, cách nhau bởi dấu cách.

### 🔹 **Ví dụ**
**Input:**
```
4
1 4 3 2
```
**Output:**
```
2 3 4 1
```

📌 *Giải thích:* Mảng gốc [1,4,3,2] được in ra theo thứ tự ngược lại thành [2,3,4,1]

## Bài 8: Pointers
**Mục tiêu:** Thao tác với con trỏ để tính tổng và hiệu tuyệt đối của hai số.

### 📌 Input Format
Hai số nguyên a và b, mỗi số trên một dòng.

### 📌 Function Description
Hoàn thành hàm `update` với các tham số:
- `int *a`: con trỏ đến số nguyên thứ nhất
- `int *b`: con trỏ đến số nguyên thứ hai

### 📌 Output Format
In ra hai dòng:
- Dòng 1: Tổng của hai số
- Dòng 2: Hiệu tuyệt đối của hai số

### 🔹 **Ví dụ**
**Input:**
```
4
5
```
**Output:**
```
9
1
```

📌 *Giải thích:*
- Tổng: 4 + 5 = 9
- Hiệu tuyệt đối: |4 - 5| = 1

## Bài 9: Strings
**Mục tiêu:** Thực hiện các thao tác cơ bản với chuỗi trong C++.

### 📌 Input Format
Hai chuỗi a và b, mỗi chuỗi trên một dòng.
Mỗi chuỗi chỉ chứa các ký tự chữ thường ('a'-'z').

### 📌 Các thao tác chuỗi
- Khai báo: `string a = "abc";`
- Lấy độ dài: `int len = a.size();`
- Nối chuỗi: `string c = a + b;`
- Truy cập ký tự: `char c0 = s[0];`
- Thay đổi ký tự: `s[0] = 'z';`

### 📌 Output Format
In ra ba dòng:
- Dòng 1: Độ dài của hai chuỗi, cách nhau bởi dấu cách
- Dòng 2: Chuỗi kết quả sau khi nối a và b
- Dòng 3: Hai chuỗi sau khi hoán đổi ký tự đầu tiên, cách nhau bởi dấu cách

### 🔹 **Ví dụ**
**Input:**
```
abcd
ef
```
**Output:**
```
4 2
abcdef
ebcd af
```

📌 *Giải thích:*
- Độ dài: chuỗi "abcd" có 4 ký tự, chuỗi "ef" có 2 ký tự
- Nối chuỗi: "abcd" + "ef" = "abcdef"
- Hoán đổi ký tự đầu: "abcd" -> "ebcd", "ef" -> "af"
