# Google Test 다운로드 및 설정
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

# 테스트 실행 파일 생성
add_executable(test_utils test_utils.cpp)

# 소스 파일 포함 (대상 테스트 소스)
target_sources(test_utils PRIVATE ${CMAKE_SOURCE_DIR}/src/utils.cpp)

# Google Test 라이브러리 연결
target_link_libraries(test_utils gtest gtest_main)

# 테스트를 CMake 테스트 시스템에 등록
add_test(NAME test_utils COMMAND test_utils)