cmake_minimum_required(VERSION 3.8)
project(grdb)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        include/cli.h
        include/config.h
        include/enum.h
        include/graph.h
        include/import.h
        include/schema.h
        include/string_pool.h
        include/tuple.h
        include/types.h
        include/vertexid.h
        src/cli/bufdump.c
        src/cli/cli.c
        src/cli/cli_enum.c
        src/cli/cli_graph.c
        src/cli/cli_graph_component.c
        src/cli/cli_graph_edge.c
        src/cli/cli_graph_new.c
        src/cli/cli_graph_print.c
        src/cli/cli_graph_schema.c
        src/cli/cli_graph_schema_add.c
        src/cli/cli_graph_tuple.c
        src/cli/cli_graph_update_tuples.c
        src/cli/lex.c
        src/cli/main.c
        src/db/component.c
        src/db/component_join.c
        src/db/component_project.c
        src/db/component_select.c
        src/db/component_sssp.c
        src/db/edge.c
        src/db/edge_read.c
        src/db/edge_write.c
        src/db/enum.c
        src/db/enum_join.c
        src/db/enum_list_read.c
        src/db/enum_list_write.c
        src/db/graph.c
        src/db/graph_import.c
        src/db/schema.c
        src/db/schema_join.c
        src/db/schema_read.c
        src/db/schema_write.c
        src/db/string_pool.c
        src/db/tuple.c
        src/db/tuple_print.c
        src/db/tuple_set.c
        src/db/tuple_util.c
        src/db/vertex.c
        src/db/vertex_read.c
        src/db/vertex_write.c
        src/db/vertexid.c)

add_executable(grdb ${SOURCE_FILES})