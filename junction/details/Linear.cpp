/*------------------------------------------------------------------------
  Junction: Concurrent data structures in C++
  Copyright (c) 2016 Jeff Preshing

  Distributed under the Simplified BSD License.
  Original location: https://github.com/preshing/junction

  This software is distributed WITHOUT ANY WARRANTY; without even the
  implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the LICENSE file for more information.
------------------------------------------------------------------------*/

#include <junction/Core.h>
#include <junction/details/Linear.h>
#include <turf/Heap.h>

namespace junction {
namespace details {

TURF_TRACE_DEFINE_BEGIN(Linear, 26) // autogenerated by TidySource.py
TURF_TRACE_DEFINE("[find] called")
TURF_TRACE_DEFINE("[find] found existing cell")
TURF_TRACE_DEFINE("[insert] called")
TURF_TRACE_DEFINE("[insert] found existing cell")
TURF_TRACE_DEFINE("[insert] ran out of cellsRemaining")
TURF_TRACE_DEFINE("[insert] reserved cell")
TURF_TRACE_DEFINE("[insert] detected race to reserve cell")
TURF_TRACE_DEFINE("[insert] race reserved same hash")
TURF_TRACE_DEFINE("[beginTableMigrationToSize] called")
TURF_TRACE_DEFINE("[beginTableMigrationToSize] new migration already exists")
TURF_TRACE_DEFINE("[beginTableMigrationToSize] new migration already exists (double-checked)")
TURF_TRACE_DEFINE("[beginTableMigration] redirected while determining table size")
TURF_TRACE_DEFINE("[migrateRange] empty cell already redirected")
TURF_TRACE_DEFINE("[migrateRange] race to insert key")
TURF_TRACE_DEFINE("[migrateRange] race to insert value")
TURF_TRACE_DEFINE("[migrateRange] race inserted Redirect")
TURF_TRACE_DEFINE("[migrateRange] in-use cell already redirected")
TURF_TRACE_DEFINE("[migrateRange] racing update was erase")
TURF_TRACE_DEFINE("[migrateRange] race to update migrated value")
TURF_TRACE_DEFINE("[TableMigration::run] already ended")
TURF_TRACE_DEFINE("[TableMigration::run] detected end flag set")
TURF_TRACE_DEFINE("[TableMigration::run] destination overflow")
TURF_TRACE_DEFINE("[TableMigration::run] race to set m_overflowed")
TURF_TRACE_DEFINE("[TableMigration::run] out of migration units")
TURF_TRACE_DEFINE("[TableMigration::run] not the last worker")
TURF_TRACE_DEFINE("[TableMigration::run] a new TableMigration was already started")
TURF_TRACE_DEFINE_END(Linear, 26)

} // namespace details
} // namespace junction
