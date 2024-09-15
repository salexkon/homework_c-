add_test([=[Test.Simple]=]  /workspaces/homework_c-/build/task_01/task_01_tests [==[--gtest_filter=Test.Simple]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[Test.Simple]=]  PROPERTIES WORKING_DIRECTORY /workspaces/homework_c-/build/task_01 SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  task_01_tests_TESTS Test.Simple)
