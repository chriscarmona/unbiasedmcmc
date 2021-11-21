# Epidemiological Study (Plummer 2014)

```bash
export repo_dir=$HOME/03_github_repos/unbiasedmcmc
export out_dir=$HOME/unbiasedmcmc_output
mkdir -p $out_dir
Rscript $repo_dir/inst/reproduceepidemiology/plummer_cut_run.R $out_dir
Rscript $repo_dir/inst/reproduceepidemiology/plummer_cut_plots.R $out_dir
```
