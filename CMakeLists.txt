cmake_minimum_required(VERSION 3.10)
project(Dev-C-Plus-Plus-Examples)

set(CMAKE_CXX_STANDARD 14)

# هذا الأمر يبحث عن جميع ملفات cpp داخل مجلد src
file(GLOB_RECURSE SOURCES "src/*.cpp")

# هذه الحلقة تدور على كل ملف وجدته وتصنع منه برنامجاً منفصلاً
foreach(sourcefile ${SOURCES})
    # استخراج اسم الملف بدون المسار والامتداد ليكون هو اسم البرنامج
    get_filename_component(name ${sourcefile} NAME_WE)

    # إنشاء أمر التشغيل لهذا الملف
    add_executable(${name} ${sourcefile})
endforeach()