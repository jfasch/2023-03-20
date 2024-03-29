Project Setup
=============

The project uses `CMake <https://cmake.org/>`__ and `googletest
<https://github.com/google/googletest>`__. Ideal work anvironment is
Linux(-like). If you have such an environment, then the steps to build
the project are,

* Create a directory for the training, and change into it

  .. code-block:: console

     $ mkdir ~/C++-Training-2023-03-20
     $ cd  ~/C++-Training-2023-03-20

* Clone and massage the project source

  .. code-block:: console

     $ pwd
     /home/jfasch/C++-Training-2023-03-20
     $ git clone https://github.com/jfasch/2023-03-20.git
     $ cd 2023-03-20/
     $ git submodule init
     $ git submodule update

* Create build directory, and chdir there

  .. code-block:: console

     $ cd ..
     $ pwd
     /home/jfasch/C++-Training-2023-03-20
     $ mkdir 2023-03-20-x86_64
     $ cd 2023-03-20-x86_64

* Use CMake to create makefiles

  .. code-block:: console

     $ pwd
     /home/jfasch/C++-Training-2023-03-20/2023-03-20-x86_64
     $ cmake ../2023-03-20

* Build

  .. code-block:: console

     $ pwd
     /home/jfasch/C++-Training-2023-03-20/2023-03-20-x86_64
     $ make

* Test

  .. code-block:: console

     $ pwd
     /home/jfasch/C++-Training-2023-03-20/2023-03-20-x86_64
     $ ./tests/cxx-exercises-utilities--suite 
     Running main() from /home/jfasch/C++-Training-2023-03-20/2023-03-20/googletest/googletest/src/gtest_main.cc
     [==========] Running 1 test from 1 test suite.
     [----------] Global test environment set-up.
     [----------] 1 test from server_thread_suite
     [ RUN      ] server_thread_suite.basic
     [       OK ] server_thread_suite.basic (0 ms)
     [----------] 1 test from server_thread_suite (0 ms total)
     
     [----------] Global test environment tear-down
     [==========] 1 test from 1 test suite ran. (0 ms total)
     [  PASSED  ] 1 test.
