if (sreg_t(RS1) >= sreg_t(RS2))
{
  set_pc(BRANCH_TARGET);
  set_branch_outcome(1);
}
else
{
  set_branch_outcome(0);
}
