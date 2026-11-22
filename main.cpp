#include "run/run.cpp"
#include "tasks/classes.hpp"

// Tasks
void run() {
  std::vector<Command *> comands_vec{
      new Command(Task1_1, "Enter & print tree dot", 1.1),
      new Command(Task2_1, "Create & changing lines", 2.1),
      new Command(Task3_1, "Create & changing students", 3.1),
      new Command(Task4_1, "Create dots", 4.1),
      new Command(Task4_2, "Create lines", 4.2),
      new Command(Task5_1, "Shoot the gun", 5.1)};

  RunCommands lab = RunCommands(comands_vec);
  lab.run();
}

int main() { run(); }
