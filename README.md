[![Project Status: WIP – Initial development is in progress, but there has not yet been a stable, usable release suitable for the public.](https://www.repostatus.org/badges/latest/wip.svg)](https://www.repostatus.org/#wip)
[![license](https://img.shields.io/badge/license-MIT-blue.svg)](https://github.com/lgruelas/lgeometric/blob/master/LICENSE)
[![Build Status](https://api.travis-ci.com/lgruelas/lgeometric.svg?branch=master)](https://travis-ci.com/lgruelas/lgeometric)
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/c74aa94186504f19a4658dbe62ab9b9b)](https://www.codacy.com/manual/lgruelas/lgeometric?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=lgruelas/lgeometric&amp;utm_campaign=Badge_Grade)

# LGeometric

![C++ master race](assets/gcc.png?raw=true "gcc")

C++ Header-only library with usefull methods for statistics, computational geometry, machine learning, algorithms and stuff like that, is intended to be for my own use but not limited to that, if there is something usefull to you please feel free to use it.

I decided to make it Header-only because I'm not expecting that it gets used in any project where this could be a disadvantage, if I put enough work in this I'll consider into using other more efficient method.

Examples of usage can be found in [CPP-Snippets](https://github.com/lgruelas/Cpp-snippets) repo.

## Getting Started

### Prerequisites
  - [Cmake](https://cmake.org/)

### Installing
This project is mantained with `Cmake` so it should be as easy as doing:

  ```bash
    mkdir build && cd build
    cmake ..
    make all
  ```

### Usage

### Unittest
The unit test are working with the GoogleTest Framewokr, to build them you should use:
````bash
    rm -rf build
    mkdir build && cd build
    cmake -DBUILD_TESTS=ON ..
```
And then to run them you should use:
```bash
````

## Built With

  - [C++17](https://isocpp.org/)

## Authors

  - **Germán Ruelas** - *Developer* - [GitHub](https://github.com/lgruelas)

See also the list of [contributors](https://github.com/your/project/contributors) who participated in this project.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details.

## Project Status

I'm starting it.

## List of algorithms
