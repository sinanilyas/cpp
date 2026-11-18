# cpp
Programlamaya Giriş dersinde kullanmak üzere hazırladığım C++ örnekleri.

## Hangi klasörü kullanmalıyım?

| Klasör | Kimler için |
|---|---|
| `Windows` | Windows kullananlar (Code::Blocks, Dev-C++, Visual Studio, VS Code...) |
| `Linux-macOS` | Linux ya da macOS kullananlar ve çevrimiçi derleyiciler (OnlineGDB gibi) |

İki klasördeki örnekler temelde aynıdır. Linux-macOS klasöründeki örneklerde Windows'a özgü komutlar çıkarılmıştır.

## Önerilen IDE'ler

| IDE | Sistem | Not |
|---|---|---|
| [Code::Blocks](https://www.codeblocks.org/downloads/binaries/) | Windows, Linux | Windows'ta adında `mingw` geçen kurulum dosyası indirilmelidir. Derleyici bu kurulum dosyası ile birlikte kurulur. |
| [Visual Studio Community](https://visualstudio.microsoft.com/vs/community/) | Windows | Kurulumda "C++ ile masaüstü geliştirme" seçilmelidir. |
| [Dev-C++](https://github.com/Embarcadero/Dev-Cpp/releases) | Windows | Embarcadero sürümünü kullanınız. Eski Orwell sürümü UTF-8 dosyalarda sorun çıkarabilir. |
| [VS Code](https://code.visualstudio.com/) | Windows, Linux, macOS | C/C++ eklentisi ve derleyici ayrıca kurulmalıdır. |
| [CLion](https://www.jetbrains.com/clion/) | Windows, Linux, macOS | Ticari olmayan kullanım için ücretsizdir. |

Visual Studio kullanıyorsanız proje ayarlarında C/C++ > Komut Satırı > Ek Seçenekler alanına /utf-8 yazınız.