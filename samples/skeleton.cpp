#include <iostream>
#include "..\src\enki.h"

using namespace std;
using namespace enki;

class SkeletonTestCase : public TestCase<SkeletonTestCase> {
  public:
    SkeletonTestCase(): TestCase() {
      add(testPass, "Test pass 1");
      add(testFailed, "Test fail 1");
      add(testPass, "Test pass 2");
      add(testEmpty, "Test empty");
    }

  void testPass() {
    pass();
  }

  void testFailed() {
    fail();
  }

  void testEmpty() {
  }
};

int main(int argc, char** argv) {
  SkeletonTestCase tcase;
  ConsoleResultExporter<SkeletonTestCase> cexp;

  tcase.run();
  cexp.export_results(tcase);
}
