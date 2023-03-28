# Belajar C++

Repo ini merupakan dokumentasi saya belajar C++.


### Menjalankan program

```bash
./watch.sh nama-file-latihan
```
**Berikut nama file latihan (bisa dilihat di directory ./src)** 
1. hello-world
2. variabel
3. cin-input

### Apa itu c++?

C++ adalah bahasa pemrograman lintas platform yang dapat digunakan untuk membuat aplikasi dengan kinerja tinggi.

C++ dikembangkan oleh Bjarne Stroustrup sebagai perluasan dari bahasa pemrograman C.

C++ memberikan para pemrogram kontrol yang tinggi terhadap sumber daya sistem dan memori.

### Preprocess, Compile, dan Linking pada C++

Saat menulis kode C++, terdapat beberapa tahap yang harus dilalui untuk menghasilkan program yang dapat dieksekusi. Tahap-tahap tersebut meliputi preprocess, compile, dan linking.

**Preprocess**

Tahap pertama dalam proses tersebut adalah preprocess. Pada tahap ini, preprocessor (yang merupakan bagian dari compiler C++) akan memproses semua direktif preprocessing yang ada pada kode Anda. Direktif preprocessing adalah instruksi khusus yang dimulai dengan tanda pagar (`#`). Instruksi tersebut digunakan untuk menyertakan file header, mendefinisikan konstanta dan macro, serta melakukan tugas lainnya yang harus dilakukan sebelum tahap kompilasi dimulai.

Preprocessor akan membaca kode sumber Anda dan menghasilkan file intermediate yang berisi semua direktif preprocessing dan perubahan apa pun yang dibuat oleh direktif tersebut. File ini kadang-kadang disebut sebagai "preprocessed output".

**Compile**

Setelah preprocessor selesai bekerja, compiler C++ dapat memulai kompilasi. Pada tahap ini, compiler akan mengubah kode sumber Anda (termasuk perubahan yang dibuat oleh preprocessor) menjadi kode mesin yang dapat dieksekusi oleh komputer.

Compiler akan mem-parsing kode Anda dan menghasilkan file objek. File objek berisi kode mesin dan data lain yang dapat di-link bersama dengan file objek lainnya untuk membentuk program yang dapat dieksekusi.

**Linking**

Tahap terakhir dalam proses tersebut adalah linking. Pada tahap ini, linker akan menggabungkan file objek yang dihasilkan oleh compiler dengan semua library yang diperlukan dan menghasilkan program yang dapat dieksekusi.

Linker akan menyelesaikan simbol yang belum terselesaikan (seperti fungsi atau variabel yang direferensikan di satu file objek tetapi didefinisikan di file objek lain) dan memastikan bahwa semua kode dan data yang diperlukan termasuk dalam program yang dihasilkan.

### Menulis Comment Di C++

```c++
 // ini adalah one line comment
 
 /*
    ini adalah
    multi line comment
*/
```

