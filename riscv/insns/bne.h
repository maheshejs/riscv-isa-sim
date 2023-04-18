if (RS1 != RS2)
{
  set_pc(BRANCH_TARGET);
  set_branch_outcome(1);
}
else
{
  set_branch_outcome(0);
}
