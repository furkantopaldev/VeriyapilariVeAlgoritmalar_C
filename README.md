# 🧩 C Data Structures & Algorithms Library

[![Language](https://img.shields.io/badge/Language-C%20(C99%20%2F%20C11)-blue?style=flat&logo=c)](https://en.cppreference.com/w/c)
[![Data Structures](https://img.shields.io/badge/Topics-Data%20Structures%20%26%20Algorithms-orange?style=flat)](https://github.com/)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)

Bu depo, **C programlama dili** ile geliştirilmiş temel veri yapıları (Data Structures), bellek yönetimi (Dynamic Memory Allocation), işaretçiler (Pointers), özyineleme (Recursion), dosya işlemleri (File I/O) ve algoritma pratiklerini tek bir çatı altında toplayan kapsamlı bir referans kütüphanesidir.

---

## 📚 Konu Başlıkları ve İçerik Haritası

```mermaid
flowchart TD
    Root[C Veri Yapıları & Algoritmalar]
    
    Root --> DS[1. Veri Yapıları Data Structures]
    Root --> Pointers[2. İşaretçiler & Bellek Pointers]
    Root --> Rec[3. Özyineleme Recursion]
    Root --> Structs[4. Yapılar Structs]
    Root --> Files[5. Dosya İşlemleri File I/O]
    Root --> Algo[6. Sayısal Algoritmalar]

    DS --> DS1[Tek / Çift Yönlü Bağlı Liste Linked List]
    DS --> DS2[Yığın Yapısı Stack]
    
    Pointers --> P1[Call by Value vs Call by Reference]
    Pointers --> P2[Dizi ve String İşaretçileri]
    
    Rec --> R1[Üs Alma & Faktöriyel]
    Rec --> R2[Dizide Maksimum Eleman Bulma]
    
    Structs --> S1[Kullanıcı & Öğrenci Veri Modelleri]
    Structs --> S2[Struct Dizileri & Fonksiyon Parametreleri]
    
    Files --> F1[Metin Dosyası Okuma / Yazma / Ekleme]
    Files --> F2[İkili Binary / Dat Dosyası İşlemleri]
```

---

## 🗂️ Dosya ve Kategori Rehberi

### 1. 🔗 Bağlı Listeler (Linked Lists)
* `doublelinkedlist.c` - Çift yönlü bağlı liste (Doubly Linked List) ekleme, silme ve traversal mantığı.
* `linkedlis1.c`, `linkedlistdeneme1.c` - Tek yönlü bağlı liste (Singly Linked List) düğüm oluşturma ve arama.

### 2. 🥞 Yığın (Stack) Yapısı
* `stack1.c` - LIFO (Last In First Out) prensibine göre push, pop ve peek operasyonları.

### 3. 🎯 İşaretçiler & Bellek Yönetimi (Pointers & Memory)
* `CallByValuepointertanimlama.c` & `CallByReferancepointer.c` - Değer ve referans ile aktarım arasındaki farklar.
* `pointerarray1.c`, `pointrarrray2.c` - İşaretçi aritmetiği ve dizi indeksleme.
* `pointerstring1.c` - Karakter dizileri (strings) ve işaretçi manipülasyonu.
* `ornekpointer1.c`, `ornekpointer2.c` - Dinamik bellek ve işaretçi pratikleri.

### 4. 🔄 Özyineleme (Recursion)
* `rekursif.c`, `rekursifusalma.c`, `rekusifusalmaiki.c` - Özyinelemeli üs alma ve matematiksel fonksiyonlar.
* `rekursifmax.c` - Dizi içerisindeki en büyük elemanı özyinelemeli arama algoritması.

### 5. 🏗️ Yapılar (Structs)
* `structornek4.c`, `structornek5.c`, `structornek6.c` - Özel veri tipleri oluşturma, struct içinde dizi tutma ve fonksiyonlara struct aktarımı.

### 6. 📁 Dosya Yönetimi (File I/O)
* `dosyaacma1.c`, `dosyaislemleri2.c`, `dosyaislemleri3.c` - Dosya açma modları (`r`, `w`, `a`), `fprintf`, `fscanf`, `fgets` kullanımı.

### 7. 🧮 Sayısal Algoritmalar & Sınav Hazırlık
* `numericodev.c`, `numericodev3.c` - Sayısal yöntemler ve matematiksel analiz algoritmaları.
* `dizibirlestirme.c`, `diziornekleri4.c` - Dizi sıralama ve birleştirme (merge) pratikleri.

---

## 🚀 Kodları Derleme ve Çalıştırma

Herhangi bir C derleyicisi (GCC, Clang veya MinGW) ile:

```bash
# GCC ile derleme
gcc -o program doublelinkedlist.c

# Çalıştırma (Windows)
./program.exe

# Çalıştırma (Linux / macOS)
./program
```

---

## 👨‍💻 Geliştirici

* **Furkan Topal** - [GitHub Profili](https://github.com/furkantopaldev)
